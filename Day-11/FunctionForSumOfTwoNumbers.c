#include <stdio.h>
int add(int a,int b)
{
return a+b;
} 

int main()
{
    int a,b;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    int sum;

    sum = add(a,b);
    printf("Sum of the two given numbers is: %d",sum);
    return 0;
}