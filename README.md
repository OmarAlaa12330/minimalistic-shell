# MyShell

MyShell is a simple command-line shell implemented in C. Inspired by the xv6 project developed at MIT, it came with a simple C shell program, aimed at helping students learn and understand Operating Systems. At the moment, it supports basic Unix shell commands, including `cd`, `pwd`, `ls`, and `clear`. This project was created as a learning exercise to understand the fundamentals of shell programming, process management, and system calls.

## Description

MyShell is a custom-built shell that replicates some of the basic functionalities of popular Unix shells like Bash. Currently, it implements known built-in commands. The built-in commands are implemented directly in C, while external commands are executed using the `execvp` system call.

This project is also a good excuse to write some C code that explores low level programming without all the overhead that comes with more modern languages.

## Current Features

- **Built-in Commands:**
    - `cd`: Change the current directory.
    - `pwd`: Print the current working directory.
    - `exit`: Exit the shell.
    - `ls`: List directory contents (Optional arguments is a work in progress).
    - `clear`: Clear the terminal screen (Works on ANSI Terminals, but not on a CLION terminal)

- **Error Handling:**
    - Proper error messages are displayed when commands fail.

