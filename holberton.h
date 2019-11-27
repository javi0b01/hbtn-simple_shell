#ifndef _SHELL_H_
#define _SHELL_H_

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

void ctrlc(int num);
extern char **environ;
int exit_func (char *str);
int _strcmp(char *s1, char *s2);
#endif
