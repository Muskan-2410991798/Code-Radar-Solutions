#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    bool flag=false;
    if(n==0 || n==1){
        printf("Not Prime");
    }
    else if (n>1){
        for(int i=2;i<n;i++){
            if(n%i==0){
                flag=true;
                break;
            }
        }
        if (flag = true){
            printf("Not Prime");
        }
        else{
            printf("Prime")
        }
    }
    
    return 0;
}