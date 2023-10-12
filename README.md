# Simple Shell Project Readme

## Description

This Simple Shell project is a basic implementation of a command-line interface (CLI) shell in C programming. It allows users to execute commands and interact with their computer through a text-based interface.

## Features

- Command execution: Execute common shell commands, such as `ls`, `cd`, `pwd`, and more.
- Basic input/output redirection: Redirect input from a file and output to a file.
- Simple piping: Pipe the output of one command into another.
- Built-in commands: Includes a few built-in commands like `help` and `exit`.

## Usage

The Simple Shell supports basic shell commands. You can use it just like you would a regular command-line interface.

Here are some example commands:

- To list files in the current directory:
  
  ```bash
  ls
  ```

- To change the current directory:

  ```bash
  cd /path/to/directory
  ```

- To display the current working directory:

  ```bash
  pwd
  ```

- To redirect input and output:

  ```bash
  command < input.txt > output.txt
  ```

- To pipe the output of one command into another:

  ```bash
  command1 | command2
  ```

- To get help:

  ```bash
  help
  ```

- To exit the shell:

  ```bash
  exit
  ```

## Known Issues

- This shell is a very basic implementation and may not handle all edge cases or complex scenarios.

## Contributing

If you want to contribute to this project, please fork the repository and create a pull request with your changes. Feel free to open issues for bug reports or feature requests.

## License

This project is licensed under the [MIT License](LICENSE), which means you can use and modify it freely, but you should give proper attribution and not hold the original authors liable for any issues.

## Acknowledgments

This Simple Shell project is inspired by various online tutorials and resources. Special thanks to the open-source community for providing valuable knowledge and tools.
