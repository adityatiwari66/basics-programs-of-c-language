#include <stdio.h>
#include<math.h>
char main()
{
    int a,r,n,d,t;
    printf("\n enter any number to check armstrong:");
    scanf("%d",&n);
    for(d=0,t=n;t>0;d++,t/10);
    a=0;
    t=n;
    while (t>0)
    {
        r=t%10;
        a=a+pow(r,d);
        t/=10;
    }
    if (n==a)
      
      {
      printf("\n %d is armstromg:");
      }
      else
      {
        printf("\n %d is not armstromg:");
    return 0;
    }
}
