#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d",&n);
    int minans=INT_MAX;
    int maxans=INT_MIN;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
        if(arr[i]<minans){
            minans = arr[i];
        }
        if(arr[i]>maxans){
            maxans = arr[i];
        }
    }
    printf("%d ",minans);
    printf("%d ",maxans);
    return 0;
}