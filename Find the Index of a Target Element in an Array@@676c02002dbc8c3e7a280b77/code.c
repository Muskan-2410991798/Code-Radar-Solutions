#include <stdio.h>
int ans(int n,int arr[n],int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
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
    ans(n,arr,target);
    
    return 0;
}