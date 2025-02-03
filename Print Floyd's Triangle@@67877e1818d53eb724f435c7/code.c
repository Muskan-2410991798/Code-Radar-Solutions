#include <stdio.h>

int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            if(i==0 && j==0){
                printf("1");
            }
            else{
                printf("%d ",2i+j);
            }
        }
        printf("\n");
    }
    return 0;
}