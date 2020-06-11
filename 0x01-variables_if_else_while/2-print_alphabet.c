#include <stdio.h>
/* more headers goes there */
/**
 * main - main block
 * Use the function puts
 * You are not allowed to use printf
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
		putchar('\n');
		return (0);
}
