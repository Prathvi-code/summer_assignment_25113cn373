#include <stdio.h>
int main()
{
    int n,sum=0,i=1;
    printf("Enter the numbers:");
    scanf("%d",&n);
    while(i<=n)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum of the given numbers is: %d",sum);
    return 0;
}