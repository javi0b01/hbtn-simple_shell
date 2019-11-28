#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <strings.h>
#include <string.h>
#include <limits.h>
#include <signal.h>
#include <errno.h>
#include <signal.h>
#include <dirent.h>

int _strcmp(char *s1, char *s2);
int exit_func(char *str);
char **_fgetpath(void);
char *_fwhich(char **s1, char *s2);
void ctrlc(int num);
#endif //MAIN_H
