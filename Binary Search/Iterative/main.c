//binary search iteratively
#include<stdio.h>

int binarySearch (int [], int, int);

int main()
{
    int n, key, i, loc;
    scanf("%d",&n);

    int arr[n];
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);

    printf("Enter key to find: ");
    scanf("%d",&key);

    if((loc=binarySearch(arr,n,key))!=-1)
        printf("Element found at %d",loc);
    else 
        printf("Not found"); 
}

int binarySearch(int arr[], int n, int key) {
    int mid, lb=0, ub=n-1, loc=-1;
    while(lb<=ub && loc==-1) {
        mid = (lb+ub)/2;
        if(arr[mid]==key) loc = mid;
        else if(arr[mid]>key) ub = mid-1;
        else lb = mid+1;
    }
    return loc;
}