#include <stdio.h>
int main ()
{
    int n,a[100];
    printf("Enter number of elements:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int sum=0;
    float avg;

    for(int i=0;i<n;i++)
    {
        sum = sum + a[i];
    }

    avg = (float)sum / n;

    printf("The sum of elements of the array is %d\n",sum);
    printf("The avg of the elements of array is %f",avg);
    return 0;
}