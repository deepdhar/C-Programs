// program to reverse the location of array elements

#include<stdio.h>

int main()
{
    int n, a[100], i;
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    printf("Enter data: \n");
    for (i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n%d elements in the list in reverse order\n",n);
    for (i=n; i>=1; i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
