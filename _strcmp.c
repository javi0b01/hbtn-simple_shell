#include "holberton.h"
/**
 * _strcmp - Function of the program to compare strings
 * @s1: The first argument
 * @s2: The second argument
 * Return: Exit if is 0
 */
int _strcmp(char *s1, char *s2)
{
	int var1 = 0;

	while (s1[var1] && s2[var1])
	{
		if (s1[var1] != s2[var1])
		{
			return (s1[var1] - s2[var1]);
		}
		var1++;
	}
	return (0);
}
