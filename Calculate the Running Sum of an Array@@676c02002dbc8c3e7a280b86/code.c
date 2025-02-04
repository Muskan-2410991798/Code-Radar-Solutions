#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int s=0;
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0; i<n; i++){
        s=s+arr[i];
        printf("%d ",s);
    }
    return 0;
}