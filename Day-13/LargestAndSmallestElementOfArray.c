#include <stdio.h>
int main ()
{
    int n,a[100];
    printf("Enter number of elements:");
    scanf("%d",&n);
    int large,small;
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        large = a[0];
        small = a[0]; 
    }
    
    for(int i=0;i<n;i++)
    {
        
        if(large < a[i])
        {
            large = a[i];
        }
    }
    printf("\n");

    for(int i=0;i<n;i++)
    {
        
        if(small > a[i])
        {
            small = a[i];
        }
    }
    printf("The largest element is %d\n",large);
    printf("The smallest element is %d",small);
    return 0;
}