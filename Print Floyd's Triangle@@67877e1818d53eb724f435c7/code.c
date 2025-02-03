#include <stdio.h>

int main() {
    int n,i,j;
    scanf("%d",&n);
    int c=1;
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            printf("%d ",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}