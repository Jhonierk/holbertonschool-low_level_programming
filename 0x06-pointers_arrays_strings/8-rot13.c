#include "holberton.h"

/**
 * rot13 - rotate characters 13 places in the alphabet
 * @s: string
 * Return: string `s` rotated
 */

char *rot13(char *s)
{
	int i, j;

	char *c1 = "abcdefghijklmABCDEFGHIJKLM";
	char *c2 = "nopqrstuvwxyzNOPQRSTUVWXYZ";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; c1[j] != '\0'; j++)
		{
			if (c[i] == c1[j])
				c[i] = c2[j];
			else if (c[i] == c2[j])
				c[i] = c1[j];
		}
	}
	return (c);
}
