#include "holberton.h"
/**
 * ctrlc - Function that not exit ctrl+c
 * @num: This is the parameter
 */
void ctrlc(int num)
{
	(void) num;
	write(1, "\n#cisfun$ ", 11);
	fflush(stdout);
}
