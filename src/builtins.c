#include "builtins.h"

#include <stdio.h>
#include <unistd.h>

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