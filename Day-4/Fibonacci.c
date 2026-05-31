#include <stdio.h>
int main ()
{
    int fib1,fib2,fib3,n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    fib1=0,fib2=1;
    printf("%d %d ",fib1,fib2);

    for(i=2;i<=n;i++)
    {
        fib3 = fib1 + fib2;
        printf("%d ",fib3);
        fib1 = fib2;
        fib2 = fib3;
    }
    return 0;
}