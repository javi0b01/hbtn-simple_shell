#include "main.h"
/**
* _fgetpath - function that ...
*/
char **_fgetpath(void)
{
	extern char **environ;
	char *name = "PATH";
	int result;
	char *check;
	char *dir;
	int i;
	int j;
	char **ar;
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
	ar = malloc(sizeof(char *) * 16);
	if(ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	j = 0;
	while(check != NULL)
	{
		ar[j] = check;
		check = strtok(NULL, ":");
		j++;
	}
	ar[j] = NULL;
	return (ar);
}
