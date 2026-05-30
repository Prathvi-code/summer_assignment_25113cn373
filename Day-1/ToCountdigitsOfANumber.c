#include <stdio.h>
int main ()
{
    int count=0,n;
    printf("Enter the number:");
    scanf("%d",&n);
    
      while(n>0)
    {
        n=n/10;
        count = count + 1;
    }
    printf("Number of digits in the given number are:%d",count);
    return 0;
}