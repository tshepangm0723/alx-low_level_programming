#include "main.h"
/**
 * get_endianness - a function that checks if the
 * machine is small/ big endian.
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
