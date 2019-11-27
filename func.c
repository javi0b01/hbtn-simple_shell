#include "main.h"
/**
* _getpath - function that prints each directory contained in the the environment variable PATH, one directory per line.
*/
char **_getpath(void)
{
	extern char **environ;
	char *name = "PATH";
	int result;
	char *check;
	int i;
	char *dir;
	i = 0;
	while(environ[i] != NULL)
	{
		check = strtok(environ[i], "=");
		result = strcmp(name, check);
		if (result  == 0)
		{
			check = strtok(NULL, "\0");
			dir = check;
		}
		i++;
	}
	check = strtok(dir, ":");
	while(check != NULL)
	{
		//printf("%s\n", check);
		check = strtok(NULL, ":");
	}
	return (check);
}
