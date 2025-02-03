#include <stdio.h>

int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(j=0;j<i+1;j++){
            printf("%d",j+1);
        }
        for(j=n;j>1;){
            j=j-1;
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}