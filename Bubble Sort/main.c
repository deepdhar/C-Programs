// Bubble Sort
#include <stdio.h>
int main()
{
    int arr[100], n, i, j, temp;
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    printf("Enter data : ");
    for (i=0; i<n; i++) 
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted list in ascending order: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}