// Create 2D matrices with desired elements and add the matrices to create a resultant matrix

#include<stdio.h>

int main()
{
    int i, j, a, b, c, d;
    int A[50][50], B[50][50];
    printf("Enter no. of rows and columns of matrix A : ");
    scanf("%d %d",&a,&b);
    printf("Enter no. of rows and columns of matrix B : ");
    scanf("%d %d",&c,&d);

    printf("Enter data in matrix A : ");
    for (i=0; i<a; i++)
    {
        for (j=0; j<b; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("Enter data in matrix B : ");
    for (i=0; i<c; i++)
    {
        for (j=0; j<d; j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    printf("Matrix A\n");
    for (i=0; i<a; i++) {
      for (j=0; j<b; j++) {
         printf("%d ", A[i][j]);
         if(j==(b-1)) {
            printf("\n");
         }
      }
   }

   printf("Matrix B\n");
    for (i=0; i<c; i++) {
      for (j=0; j<d; j++) {
         printf("%d ", B[i][j]);
         if(j==(d-1)) {
            printf("\n");
         }
      }
   }

    if(a==c && b==d)
    {
        printf("Matrix C\n");
        for(i=0; i<a; i++)
        {
            for(j=0; j<b; j++)
            {
                printf("%d ",A[i][j]+B[i][j]);
                if(j==(d-1)) {
                    printf("\n");
                }
            }
        }
    }
    return 0;
}
