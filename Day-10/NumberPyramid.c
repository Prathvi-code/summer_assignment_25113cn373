#include <stdio.h>
int main ()
{
    int n;
     printf("Enter number of rows:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        int a=i-1;
        for(int j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(int j=2;j<=i;j++)
        {
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}