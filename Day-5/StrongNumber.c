#include <stdio.h>
int main ()
{
    int n,sum = 0;
    printf("Enter the number to be checked as a strong number:");
    scanf("%d",&n);
    int fact=1;
    int a = n;
    
    while (a > 0) {
        int ld = a % 10;   
        fact = 1;

        for (int i = 1; i <= ld; i++) \
        {
            fact = fact * i;
        }

        sum = sum + fact;
        a = a / 10;
    }
    if(sum==n)
    {
        printf("The given number is a strong number");
    }
    else
    {
        printf("The given number is not a strong number");
    }
    return 0;
}