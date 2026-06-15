#include <stdio.h>
int main ()
{
    int a[100][100],n,m,i,j,dsum=0,offsum=0;
    printf("Enter number of rows:");
    scanf("%d",&n);
    printf("Enter the numbe of columns:");
    scanf("%d",&m);

    printf("Enter the matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            {
            dsum = dsum + a[i][j]; // dsum is sum of diagonal elements
            }
        }
        offsum = offsum + a[i][3-i-1]; // offsum is sum of off diagonal elements
    }
    printf("The sum of diagonal elements is: %d\n",dsum);
    printf("The sum of off diagonal elements is: %d",offsum);
    return 0;
}