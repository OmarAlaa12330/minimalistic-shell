#include "builtins.h"

#include <stdio.h>
#include <unistd.h>

void
cd_command(char **args) {
    if (args[1] == NULL) {
        fprintf(stderr, "myshell: expected argument to \"cd\"\n");
    } else{
        if (chdir(args[1]) != 0) {
            perror("myshell");
        }
    }
}

void
pwd_command() {
    char cwd[1024];

    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        printf("%s\n", cwd);
    } else {
        perror("myshell");
    }
}
