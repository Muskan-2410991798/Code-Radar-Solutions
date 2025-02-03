#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int evencount = 0;
    int oddcount = 0;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
        if (arr[i]%2==0){
            evencount +=1;
        }
        else{
            oddcount +=1;
        }
    }
    printf("%d ",evencount);
    printf("%d ",oddcount);
    return 0;
}