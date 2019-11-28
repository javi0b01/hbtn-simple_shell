#include "holberton.h"
/**
 *  exit_func - This function do exit to the program
 *  @str: This is the string
 *  Return: Exit to 0
 */
int exit_func(char *str)
{
	if (_strcmp(str, "exit") == 0)
	{
		exit(0);
	}
	return (0);
}
