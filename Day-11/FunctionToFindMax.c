#include <stdio.h>
int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}

int main()
{
    int a,b;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    int maxterm;
    maxterm = max(a,b);
    printf("The maximum number is: %d",maxterm);
    return 0;
}