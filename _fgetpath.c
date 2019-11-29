#include "main.h"
/**
 * _fgetpath - function that ...
 * Return: the ...
 */
char **_fgetpath(void)
{
	char *name = "PATH";
	int result;
	char *check;
	char *dir;
	int i;
	int j;
	char **ar;
	char *tmp;

	if (environ == NULL)
		return (NULL);
	i = 0;
	while (environ[i] != NULL)
	{
		tmp = strdup(environ[i]);
		check = strtok(tmp, "=");
		result = strcmp(name, check);
		if (result  == 0)
		{
			check = strtok(NULL, "\0");
			dir = strdup(check);

		}
		free(tmp);
		i++;
	}
	check = strtok(dir, ":");
	ar = malloc(sizeof(char *) * 16);
	if (ar == NULL)
	{
		free(dir);
		return (NULL);
	}
	j = 0;
	while (check != NULL)
	{
		ar[j] = check;
		check = strtok(NULL, ":");
		j++;
	}
	ar[j] = NULL;
	return (ar);
}
