#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    if(n>=1 && n<=1000)
    {
    for(i=0;i<=n;i++)
    {
    sum=sum+i;
    }
    }
    printf("%d",sum);
    return 0;
}
