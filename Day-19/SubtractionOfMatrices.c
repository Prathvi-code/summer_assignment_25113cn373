#include <stdio.h>
int main ()
{
    int a[100][100],b[100][100],c[100][100],n,m,i,j;
    printf("Enter number of rows:");
    scanf("%d",&n);
    printf("Enter number of columns:");
    scanf("%d",&m);

    printf("Enter 1st matrix:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Enter 2nd matrix:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("The subtraction of the given matrices is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            c[i][j] = a[i][j] - b[i][j];
            if(c[i][j]<0)
            {
                c[i][j] = c[i][j] * (-1);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",c[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}