#include <stdio.h>

void _print_rev_recursion(char *s);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}

void _print_rev_recursion(char *s)
{
	printf("%s", _print_rev_recursion(s + 1));
}
