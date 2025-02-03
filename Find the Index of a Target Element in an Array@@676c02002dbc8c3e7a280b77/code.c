#include <stdio.h>
int ans(int arr[n],int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            printf("%d",i);
            break;
        }
    }
    return -1;
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int c=ans(arr,target);
    printf("%d",c);
    
    return 0;
}