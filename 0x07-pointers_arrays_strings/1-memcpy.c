/*
 * File: 1-memcpy.c
 * Auth: Rhoda B Manyaga
 */

#include "main.h"

/**
 * char *_memcpy - Copies n bytes from memory area src to memory area dest
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: A pointer to the destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

 		for (i = 0; i < size; i++)
		dest[i] = src[i];
	}
		return (dest);
}
