#include <stdio.h>
int main ()
{
    int a[100][100],b[100][100],n,m,i,j;
    printf("Enter number of rows:");
    scanf("%d",&n);
    printf("Enter number of columns:");
    scanf("%d",&m);

    printf("Enter the matrix:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Transpose of the given matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            b[i][j] = a[j][i];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",b[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}