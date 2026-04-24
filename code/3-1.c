#include <stdio.h>
#include <string.h>

int main() {
    char *names[] = {"apple", "mango", "ant", "banana", "cat", "anaconda"};
    int n = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(names[j], names[j+1]) > 0) {
                char *c = names[j];
                names[j] = names[j+1];
                names[j+1] = c;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
