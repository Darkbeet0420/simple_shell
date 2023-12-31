#include "main.h"

/**
 * interprete_cmd - takes string, splits into arrays and runs associated function it
 *
 * @input: pointer to input command string
 * @exe: name of the program
 * @cnt: the loop count
 * @str: string to be split
 * Return: 0 or 1
 */

int interprete_cmd(char *input, char *exe, int *cnt, char *str)
{
	int ret = 1;
	size_t arr_size = sizeof(char *) * 24, x = 0;
	char *ptr, *str_ptr;
	char **str_arr = malloc(arr_size);

	if (str_arr == NULL)
		perror_exit();
	str_ptr = str;
	ptr = _strsep(&str_ptr, " \n\t\r\a");
	if (ptr == NULL)
	{
		free(str_arr);
		return (0);
	}
	while (ptr != NULL)
	{
		if (*ptr != '\0')
		{
			str_arr[x] = _strdup(ptr);
			if (str_arr[x] == NULL)
				perror_exit();
			x++;
		}
		ptr = _strsep(&str_ptr, " \n\t\r\a");
		if (x >= arr_size)
		{
			str_arr = _realloc(str_arr, arr_size, i_arr(&arr_size));
			if (str_arr == NULL)
				perror_exit();
		}
	}
	str_arr[x] = '\0';
	str_arr[0] = replace_alias(str_arr[0]);
	if (check_builtin(str_arr[0]) != NULL)
		(*check_builtin(str_arr[0]))(str_arr, input, exe,
					     cnt);
	else
		ret = (exec_cmd(str_arr, exe, cnt));
	free_str_arr(str_arr);
	return (ret);
}
