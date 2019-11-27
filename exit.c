#include "holberton.h"

int exit_func(char *str)
{
	if (_strcmp(str, "exit") == 0)
	{
		exit(0);
	}
	return (0);
}
