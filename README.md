Custom Printf Implementation
Project Overview
This project involves creating a custom implementation of the printf function in C, named _printf. The goal is to implement a simplified version of printf that handles specific format specifiers and provides formatted output to the standard output. This implementation is a basic exercise to understand how formatting and output functions work in C.

Features
Custom Print Function: Implements _printf to produce formatted output.
Supported Format Specifiers:
%c - Prints a single character.
%s - Prints a string.
%% - Prints a percent sign.
Compilation Instructions
To compile the code, use the following command:

sh
Copy code
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
Note: Ensure that no .c files with a main function are in the root directory of your project. Instead, place test files with main functions in a separate directory if needed.

Usage
Include the main.h header file in your source files to use the custom _printf function:

c
Copy code
#include "main.h"
Here is an example of how to use _printf:

c
Copy code
#include "main.h"

int main(void)
{
    _printf("Hello, World!\n");
    _printf("Character: [%c]\n", 'A');
    _printf("String: [%s]\n", "Sample text");
    _printf("Percent sign: [%%]\n");
    return 0;
}
Testing
To verify the functionality of your _printf implementation, you can use test files that include various format specifiers and edge cases. An example test file is provided in the project directory to help you get started.

Edge Cases
When testing, ensure to handle edge cases similarly to the standard printf function, even if not explicitly specified in the project requirements.

Project Repository
Repository Name: holbertonschool-printf
License: This project is licensed under the MIT License.
