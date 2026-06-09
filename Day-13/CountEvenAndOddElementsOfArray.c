#include <stdio.h>
int main ()
{
    int n,a[100];
    printf("Enter number of elements:");
    scanf("%d",&n);
    
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int even = 0,odd = 0;

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("The number of even elements are %d\n",even);
    printf("The number of odd elements are %d",odd);
    return 0;
}