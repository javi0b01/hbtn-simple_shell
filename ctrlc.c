#include "holberton.h"

void ctrlc(int num)
{
	(void) sig_num;
	write(1, "\n$ ", 3);
	fflush(stdout);
}
