#include "main.h"
/**
*
*/
void ctrlc(int num)
{
	(void) num;
	write(1, "\n#cisfun$ ", 11);
	fflush(stdout);
}
