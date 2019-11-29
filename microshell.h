#ifndef _MICROSHELL_H_
#define _MICROSHELL_H_

/* Libraries */

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

/* Prototypes */

void ctrlc(int sig_num);
extern char **environ;
int exit_func (char *my_str);
int _strcmp(char *s1, char *s2);
#endif /* _MICROSHELL_H_ */
