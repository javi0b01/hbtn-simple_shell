#include "main.h"
int main()
{
	char **retfg;
	char *retfw;
	char *command = "ls";
	int i;
	retfg = _fgetpath();
	/*
	for (i = 0; i < 16; i++)
	{
		printf("%s\n", retfg[5]);
	}
	printf("%s\n", command);
	*/
	retfw = _fwhich(retfg, command);
	printf("%s\n", retfw);
	return (0);
}
