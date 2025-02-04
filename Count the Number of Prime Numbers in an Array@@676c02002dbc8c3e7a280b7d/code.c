#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int count = 0;
    int flag = 0;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if (arr[i] == 0 || arr[i]==1){
            flag= 1;
        }
        else{
            for(int j=2;j<=n;j++){
                if (arr[i]%j==0){
                    flag=1;
                    break;
                }
                else{
                    flag=0;
                }
                if(flag==0){
                    count +=1;
                }
            }
            
        }
    }
    printf("%d",count);
    return 0;
}