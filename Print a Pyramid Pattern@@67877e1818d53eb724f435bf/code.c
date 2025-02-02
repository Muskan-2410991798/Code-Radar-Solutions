#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            printf(" ");
        }
        printf("\n");
        for(int j=0;j<2n+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}