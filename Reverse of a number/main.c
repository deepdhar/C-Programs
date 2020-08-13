#include <stdio.h>
#include <math.h>
int reverse(int);

int main()
{
    int n, d;
    printf("\nEnter any number : ");
    scanf("%d",&n);
    
    printf("\nThe reverse of %d is %d",n,reverse(n));
    printf("\n");
    return 0;
}

int reverse(int n)
{
    int d=(int)log10(n);
    if (n<10) {
        return n;
    }
    else {
        return (n%10*pow(10,d) + reverse(n/10));
    }
}