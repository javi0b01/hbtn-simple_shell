#include "microshell.h"

/**
 * _strcmp - entry point to the program
 * @s1: entry argument.
 * @s2: entry argument.
 * Return: 0 if sucess.
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] && s2[a])
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
