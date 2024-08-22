#include "builtins.h"

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <dirent.h>

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


void
exit_command() {
    printf("Closing myshell...\n");
    exit(0);
}


void
ls_command() {
    DIR *d;
    struct dirent *dir;
    d = opendir(".");
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            printf("%s\n", dir->d_name);
        }
        closedir(d);
    } else {
        perror("myshell");
    }
}

void
clear_command() {
    printf("\033[H\033[J");
}