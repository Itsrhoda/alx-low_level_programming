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
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
