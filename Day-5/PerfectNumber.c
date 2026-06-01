#include <stdio.h>

int main() 
{
    int n,a,b,ld,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    a = n;
    b = a;
    for(int i=1;i<n;i++)
    {
        if(b%i==0)
        {
            sum = sum + i;
        }
    }
    if(a==sum)
    {
        printf("The given number is a perfect number");
    }
    else
    {
        printf("The given number is not a perfect number");
    }
    return 0;
}