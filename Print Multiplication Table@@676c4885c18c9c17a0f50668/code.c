#include <stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        printf("%d x %d = %d",n,i,n*i);
        printf("\n");
    }
    return 0;
}