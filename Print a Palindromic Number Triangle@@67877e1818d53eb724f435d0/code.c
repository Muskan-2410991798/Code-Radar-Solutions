#include <stdio.h>

int main() {
    int n,i,j,num;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(j=0;j<i+1;j++){
            num=j+1;
            printf("%d",num);
        }
        for(j=num;j>1;){
            j=j-1;
            printf("%d",j);
        }
        
        printf("\n");
    }
    return 0;
}