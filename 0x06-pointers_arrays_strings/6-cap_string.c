#include "main.h"
#include <stdio.h>

/**
 * cap_string - a function that capitalizes all words of a string
 * @n: Input string
 *
 * Return: caps on first letter of a separator
 */
char *cap_string(char *n)
{
	int i, x;
	int cap = 32;
	int sep[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - cap;
		}
		cap = 0;
		for (x = 0; x <= 12; x++)
		{
			if (n[i] == sep[x])
			{
				x = 12;
				cap = 32;
			}
		}
	}
	return (n);
}
