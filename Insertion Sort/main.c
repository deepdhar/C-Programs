// Insertion Sort

#include <stdio.h>
int main ()
{
    int arr[1000], n, i, j, t, flag=0;
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    printf("Enter data : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=1; i<=n-1; i++)
    {
        t = arr[i];
        for (j=i-1; j>=0; j--)
        {
            if (arr[j]>t)
            {
                arr[j+1] = arr[j];
                flag = 1;
            }
            else
            {
                break;
            }
            
        }
        if (flag)
            arr[j+1] = t;
    }
    printf("Sorted list : ");
    for (i=0; i<n; i++) {
        printf("%5d",arr[i]);
    }
    return 0;
}
