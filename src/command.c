#include <string.h>
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

