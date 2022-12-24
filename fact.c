#include<stdio.h>
int main()
{
    int i,n,fact=1,sum=0,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+fact;
    }
    printf("%d",sum);
    return 0;
}
