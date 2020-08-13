#include <stdio.h>
#include <ctype.h>  
#include <string.h>

int main ()
{
    char n[100];
    int l=0, h;
    printf ("Enter a word: ");
    gets(n);
    for(int i=0; n[i]!='\0'; i++)
    {
        if(n[i]>='A' && n[i]<='Z')
        {
            n[i] = n[i] + 32;
        }
    }
    h = strlen(n) - 1;
    while (h > l) {
        if (n[l++] != n[h--]) {
            printf("Given word is not Palindrome");
            break;
        }
        printf("Given word is Palindrome");
        break;
    }
    return 0;
}