#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int s=0;
    int e = n-1;
    int mid = s+(e-s)/2;
    for(int i=0; i<n; i++){
        scanf("%d \n",&arr[i]);
    }
    while(s<=e){
        if (arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s+(e-s)/2;
    }
    printf("%d",s);
    return 0;
}