#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int i=0;
    int left = 0;
    while(i<n){
        if(arr[i]!=0){
            swap(arr[i],arr[left]);
            left++;
            i++;
        }
        else{
            i++;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}