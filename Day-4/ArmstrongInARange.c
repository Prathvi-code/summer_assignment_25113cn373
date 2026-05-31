#include <stdio.h>
int main ()
{
    int start,end,a,i,ld,sum;
    printf("Enter the range (start & end):");
    scanf("%d %d",&start,&end);

    for(i=start;i<=end;i++)
    {
        a = i;
        sum = 0;
        while(a>0)
        {
            ld = a % 10;
            sum = sum + ld*ld*ld;
            a = a / 10;
        }
          if(sum==i)
          {
            printf("%d ",i);
          }      
    }
    return 0;
}