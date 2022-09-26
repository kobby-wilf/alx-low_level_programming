#include "main.h"
/**
 * _memset - Fills a memory block with a consant byte
 * @s: address to memory block 
 * @b: char to be used
 * @n: number of bytes to be used
 *
 * Return: A pointer the memory block.
 */

void *_memset(void *s, int c, size_t n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
