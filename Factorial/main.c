// program to find factorial of any entered number

#include <stdio.h>

long int factorial(int n)
{
    if (n==0)
        return (1);
    else
        return(n*factorial(n-1));
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("The factorial is : %d",factorial(n));
    printf("\n");
    return 0;
}
