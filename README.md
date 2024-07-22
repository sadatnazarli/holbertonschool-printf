# Custom Printf Implementation

## Project Overview
This project involves creating a custom implementation of the `printf` function in C, named `_printf`. The goal is to implement a simplified version of `printf` that handles specific format specifiers and provides formatted output to the standard output. This implementation is a basic exercise to understand how formatting and output functions work in C.

## Features
- **Custom Print Function**: Implements `_printf` to produce formatted output.
- **Supported Format Specifiers**:
  - `%c` - Prints a single character.
  - `%s` - Prints a string.
  - `%%` - Prints a percent sign.

## Compilation Instructions
To compile the code, use the following command:

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
