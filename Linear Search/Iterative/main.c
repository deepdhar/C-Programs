// linear search iteratively
#include <stdio.h>

int linearSearch(int[], int, int);

int main()
{
    int n, key, flag=0;
    printf("Enter no. of elements : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter data: ");
    for (int i=0; i<n; i++)
        scanf("%d",&arr[i]);

    printf("Enter the key element : ");
    scanf("%d",&key);

    int pos = linearSearch(arr, key, n);

    if(pos!=-1) printf("Element found in %d position",pos);
    else printf("Element not found");
    
    return 0;
}

int linearSearch(int arr[], int key, int n) {
    for(int i=0; i<n; i++) {
        if(key==arr[i]) 
            return i;
    }
    return -1;
}