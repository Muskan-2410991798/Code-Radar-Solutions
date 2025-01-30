#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b;
    scanf("%f %f",&a,&b);
    if(a/b==b){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}