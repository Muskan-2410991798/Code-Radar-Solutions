#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int count = 0;
    int arr[n];
    int visited[n];
    for(int i=0; i<n; i++){
        scanf("%d ",&arr[i]);
        visited[i]=0;
    }
    for(int i=0; i<n;i++){
        if (visited[i]==1){
            continue;
        }
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count +=1;
                visited[j]=1;
            }
        }
        printf("%d %d\n",arr[i],count);
        count = 0;
    }
    return 0;
}