#include <stdio.h>
#include <string.h>
#include "command.h"

int main(void) {
    char input[100];
    char *args[MAX_ARGS];


    while (1) {
        printf("myshell> ");
        if (fgets(input, sizeof(input), stdin) == NULL) {
            break;
        }

        printf("You entered: %s", input);

        parse_command(input, args);

        // Check if "cd" command is used
        if (strcmp(args[0], "cd") == 0) {
            cd_command(args);
        }

    }
    printf("Closing shell...");
    return 0;
}
