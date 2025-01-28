#include <stdio.h>

int main() {
    char str[];

    scanf("%24[^\n]",&str);
    printf("You entered: %s",str);
    return 0;
}