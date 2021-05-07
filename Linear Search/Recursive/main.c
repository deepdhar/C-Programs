// linear search recursively
#include<stdio.h>

int recursiveLinearSearch(int[], int, int);

int main()
{
    int n, key;
    printf("Size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);

    printf("Enter element to find: ");
    scanf("%d",&key);

    int pos = recursiveLinearSearch(arr, n, key);
    if(pos==-1) printf("Element not found");
    else printf("Element found at %d position",pos);

    return 0;
}


int recursiveLinearSearch(int arr[], int n, int key) {
    if(n<0) 
        return -1;
    if(arr[n]==key) 
        return n;
    return recursiveLinearSearch(arr, n-1, key);
}