# Custom printf Implementation

Hey there! 👋 This is our custom implementation of the printf function in C. We're building this as part of our programming course at Holberton School.

## What's this all about?

We're recreating the famous `printf` function from scratch. If you're not familiar, `printf` is used to format and print data in C. It's super versatile and can handle all sorts of data types.

## Features (so far)

Our version can handle these format specifiers:
- `%c` for characters
- `%s` for strings
- `%d` and `%i` for integers
- `%%` for printing a literal '%'

We're keeping it simple for now, so we're not dealing with stuff like flags, field width, precision, or length modifiers yet.

## How to use it

1. Include our header file in your C program:
   ```c
   #include "main.h"
  2. Use it just like you would use the standard `printf`:
   ```
_printf("Hello, %s!", "world");
```
## Compilation

To compile your program with our `_printf`, use:

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`

## Testing
We've included a sample `main.c` file to test the function. Feel free to modify it or create your own test cases!




# Authors
+ Sadat Nazarli [Profile] (https://github.com/sadatnazarli)
+ Cavid Agazade [Profile] (https://github.com/justjavid)

