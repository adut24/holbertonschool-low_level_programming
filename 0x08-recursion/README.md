# 0x08. C - Recursion

## [0-puts_recursion.c](./0-puts_recursion.c)
Write a function that prints a string, followed by a new line.
* Prototype: `void _puts_recursion(char *s);`

## [1-print_rev_recursion.c](./1-print_rev_recursion.c)
Write a function that prints a string in reverse.
* Prototype: `void _print_rev_recursion(char *s);`

## [2-strlen_recursion.c](./2-strlen_recursion.c)
Write a function that returns the length of a string.
* Prototype: `int _strlen_recursion(char *s);`

## [3-factorial.c](./3-factorial.c)
Write a function that returns the factorial of a given number.
* Prototype: `int factorial(int n);`
* If `n` is lower than `0`, the function should return `-1` to indicate an error
* Factorial of `0` is `1`

## [4-pow_recursion.c](./4-pow_recursion.c)
Write a function that returns the value of x raised to the power of y.
* Prototype: `int _pow_recursion(int x, int y);`
* If `y` is lower than `0`, the function should return `-1`

## [5-sqrt_recursion.c](./5-sqrt_recursion.c)
Write a function that returns the natural square root of a number.
* Prototype: `int _sqrt_recursion(int n);`
* If `n` does not have a natural square root, the function should return `-1`

## [6-is_prime_number.c](./6-is_prime_number.c)
Write a function that returns `1` if the input integer is a [prime number](https://en.wikipedia.org/wiki/Prime_number), otherwise return `0`.
* Prototype: `int is_prime_number(int n);`

## [100-is_palindrome.c](./100-is_palindrome.c)
Write a function that returns `1` if a string is a palindrome and `0` if not.
* Prototype: `int is_palindrome(char *s);`
* An empty string is a palindrome

## [101-wildcmp.c](./101-wildcmp.c)
Write a function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.
* Prototype: `int wildcmp(char *s1, char *s2);`
* `s2` can contain the special character `*`.
* The special char `*` can replace any string (including an empty string)
