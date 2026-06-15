#include <stdio.h>
int main ()
{
    int n,m,a[100][100],b[100][100],c[100][100];
    printf("Enter number of rows:");
    scanf("%d",&n);
    printf("Enter number of columns:");
    scanf("%d",&m);

    printf("Enter 1st matrix:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter 2nd matrix:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("The sum of the given matrices is:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d",c[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}