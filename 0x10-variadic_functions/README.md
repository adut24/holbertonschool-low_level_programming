# 0x10. C - Variadic functions

## [0-sum_them_all.c](./0-sum_them_all.c)
Write a function that returns the sum of all its parameters.
* Prototype: `int sum_them_all(const unsigned int n, ...);`
* If `n == 0`, return `0`

## [1-print_numbers.c](./1-print_numbers.c)
Write a function that prints numbers, followed by a new line.
* Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
* Where `separator` is the string to be printed between numbers
* And `n` is the number of integers passed to the function
* You are allowed to use `printf`
* If `separator` is `NULL`, don’t print it
* Print a new line at the end of your function

## [2-print_strings.c](./2-print_strings.c)
Write a function that prints strings, followed by a new line.
* Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
* Where `separator` is the string to be printed between the strings
* And `n` is the number of strings passed to the function
* You are allowed to use `printf`
* If separator is NULL, don’t print it
* If one of the string is NULL, print `(nil)` instead
* Print a new line at the end of your function

## [3-print_all.c](./3-print_all.c)
Write a function that prints anything.
* Prototype: `void print_all(const char * const format, ...);`
* Where `format` is a list of types of arguments passed to the function
	* `c`: `char`
	* `i`: `integer`
	* `f`: `float`
	* `s`: `char *` (if the string is NULL, print `(nil)` instead
	* any other char should be ignored
* You are not allowed to use `for`, `goto`, ternary operator, `else`, `do ... while`
* You can use a maximum of
	* 2 `while` loops
	* 2 `if`
* You can declare a maximum of `9` variables
* You are allowed to use `printf`
* Print a new line at the end of your function

## [100-hello_world.asm](./100-hello_world.asm)
Write a 64-bit program in assembly that prints `Hello, World`, followed by a new line.
* You are only allowed to use the system call `write` (use `int` or `syscall`, not a call)
* Your program will be compiled using `nasm` and `gcc` (as follows)
```
julien@ubuntu:~/0x0f. Variadic functions$ nasm -f elf64 100-hello_world.asm && gcc -no-pie -std=gnu89 100-hello_world.o -o hello
julien@ubuntu:~/0x0f. Variadic functions$ ./hello
Hello, World
julien@ubuntu:~/0x0f. Variadic functions$
```
