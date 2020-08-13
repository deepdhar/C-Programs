#include <stdio.h>
int binTodec (int);

int main()
{
    int n;
    printf ("Enter any binary number : ");
    scanf("%d",&n);
    printf("The decimal of %d is: %d\n",n,binTodec(n));
    return 0;
}

int binTodec (int n) 
{
    int temp = n, base =1, dec=0 ;
    int last_digit=0;
    while (temp)
    {
        last_digit = temp%10;
        temp = temp/10;
        dec += last_digit*base;
        base *= 2;
    }
    return dec;
}