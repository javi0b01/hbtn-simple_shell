#include "holberton.h"

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
