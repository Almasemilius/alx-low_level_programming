#include "main.h"

/**
 * get_endianness - Checks endianness
 * Return: 1 on success, 0 on failure.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte_pointer = (unsigned char *)&num;

	return ((*byte_pointer == 1) ? 1 : 0);
}
