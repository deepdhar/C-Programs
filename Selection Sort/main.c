// Selection Sort

#include <stdio.h>
int main()
{
    int a[100], n, i, j, c, d;
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    printf("Enter data : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n-1; i++)
    {
        d = i;
        for(j=i+1; j<n; j++)
        {
            if (a[j] < a[d])
                d = j;
        }
        if (d!=i) {
            c = a[i];
            a[i] = a[d];
            a[d] = c;
        }
    }
    printf("Sorted list : ");
    for(i=0; i<n; i++)
    {
        printf("%5d",a[i]);
    }
    printf("\n");
    return 0;
}
