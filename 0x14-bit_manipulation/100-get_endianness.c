#include "main.h"
/**
 * get_endianness - endianess chk.
 * Return: 0 if big endian, 1 if little.
 */
int get_endianness(void)
{
	unsigned int check;

	char *character = (char *) & check;
	return (*character);
}
