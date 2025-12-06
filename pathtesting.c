#include<stdio.h>
#include<stdlib.h>

int search(int arr[],int n,int k){
    int high = n-1, low = 0,mid = 0;
    
    while(low <= high){
        mid = (high+low)/2;
        if(arr[mid] == k)return mid;
        else if(k < arr[mid])high = mid-1;
        else low = mid+1;
    }
    return -1;
}
int main(){
    int n,k;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int *arr = (int*)malloc(n * sizeof(int));
    printf("Enter array elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element to find: ");
    scanf("%d",&k);
    int i = search(arr,n,k);
    if(i!=-1)printf("Element found at: %d",i+1);
    else printf("Element not found");
    free(arr);
    return 0;
}

