#include <stdio.h>


int main() {
    char a;
    scanf("%c",&a);
    getchar(a);
    if (getchar(a)<96){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }

    return 0;
}