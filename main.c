#include <stdio.h>

int main() {
    char input[1024];

    while (1) {
        printf("myshell> ");
        if (fgets(input, sizeof(input), stdin) == NULL) {
            break;
        }

        printf("You entered: %s", input);
    }
    printf("Closing shell...");
    return 0;
}
