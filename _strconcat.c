#include "microshell.h"

/**
* str_concat - entry point
* @s1: string one
* @s2: string two
* Return: always success
*/

char *str_concat(char *s1, char *s2)
{
	int counterA;
	int counterB;
	int counterC;
	char *myarray;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (counterA = 0 ; s1[counterA] ; counterA++)
	{
	}
	for (counterB = 0 ; s2[counterB] ; counterB++)
	{
	}

	myarray = malloc(sizeof(*myarray) * (counterA + counterB + 1));

	if (myarray == NULL)
		return (NULL);

	for (counterC = 0 ; counterC < counterA ; counterC++)
	{
		myarray[counterC] = s1[counterC];
	}

	for (counterA = 0 ; counterA < counterB ; counterA++)
	{
		myarray[counterA + counterC] = s2[counterA];
	}
	myarray[counterA + counterC] = '\0';
	return (myarray);
}
