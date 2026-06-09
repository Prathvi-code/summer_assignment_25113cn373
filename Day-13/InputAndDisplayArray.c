#include <stdio.h>
int main ()
{
    int a[100],n;
    printf("Enter number of elements:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
        printf("\t");
    }
    return 0;
}