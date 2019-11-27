#include "holberton.h"

void ctrlc(int num)
{
	(void) num;
	write(1, "\n$ ", 3);
	fflush(stdout);
}
