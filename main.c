#include <stdio.h>
#include <string.h>
#include "command.h"
#include "builtins.h"

int main(void) {
    char input[100];
    char *args[MAX_ARGS];


    while (1) {
        printf("myshell> ");
        if (fgets(input, sizeof(input), stdin) == NULL) {
            break;
        }


        parse_command(input, args);


        if (strcmp(args[0], "cd") == 0) {
            cd_command(args);
            continue;
        }

        if (strcmp(args[0], "pwd") == 0) {
            pwd_command();
            continue;
        }

        if (strcmp(args[0], "ls") == 0) {
            ls_command();
            continue;
        }

        if (strcmp(args[0], "exit") == 0) {
            exit_command();
            //Will terminate shell
        }


    }

    return 0;
}
