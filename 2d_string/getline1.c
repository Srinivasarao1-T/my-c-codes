#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = NULL;
    size_t size = 10; // note: should be size_t, not unsigned int
    ssize_t s;

    s = getline(&str, &size, stdin);
    if (s == -1) {
        perror("getline");
        free(str);
        return 1;
    }

    if (str[s - 1] == '\n') {
        str[s - 1] = '\0'; // remove trailing newline
    }

    printf("%s%zu\n%zd\n", str, size, s - 1);

    free(str);
    return 0;
}

