#include <stdio.h>


int main() {
    long int a;
    scanf("%d",&a);
    if(a&0){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}