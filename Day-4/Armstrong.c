#include <stdio.h>
int main ()
{
    int n,a,b,ld,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    a=n;
    b = a;
    while(a>0)
    {
        ld = a % 10;
        sum = sum + ld*ld*ld;
        a = a / 10;
    }

    if(sum==b)
    printf("The given number is an armstrong number");
    else
    printf("The given number is not an armstrong number");
    return 0;
}