#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "command.h"



void
parse_command(char *input, char **args) {
    int i = 0;
    args[i] = strtok(input, " \n");
    while (args[i] != NULL && i < MAX_ARGS - 1) {
        args[++i] = strtok(NULL, " \n");
    }
    args[i] = NULL;
}

void
cd_command(char **args) {
    char cwd[1024];

    if (args[1] == NULL) {
        fprintf(stderr, "myshell: expected argument to \"cd\"\n");
    } else{
        if (chdir(args[1]) != 0) {
            perror("myshell");
        } else {
            getcwd(cwd, sizeof(cwd));
            printf("Directory changed to %s\n", cwd);
        }
    }
}