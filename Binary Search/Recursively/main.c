//binary search recursively
#include<stdio.h>

int binarySearchRecursive(int [], int, int, int);

int main()
{
    int n, key, i;
    scanf("%d",&n);

    int lb=0, ub=n-1, loc;

    int arr[n];
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);

    printf("Enter key to find: ");
    scanf("%d",&key);

    if((loc=binarySearchRecursive(arr,key,lb,ub))!=-1)
        printf("Element found at %d",loc);
    else 
        printf("Element not found"); 

    return 0;
}

int binarySearchRecursive(int arr[], int key, int lb, int ub)
{
    int mid;
    if(lb > ub) 
        return -1;

    mid = (lb+ub)/2;

    if(key==arr[mid]) 
        return mid;
    else if(key<arr[mid]) 
        return binarySearchRecursive(arr, key, lb, mid-1);
    else 
        return binarySearchRecursive(arr, key, mid+1, ub);
}