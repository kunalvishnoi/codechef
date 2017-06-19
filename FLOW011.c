#include<stdio.h>
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        float ans;
        scanf("%lld",&n);
        if(n<1500)
        {
            printf("%d\n",n+n);
        }
        else
        {
            ans=n+500+(0.98*n);
            printf("%g\n",ans);
        }
    }
    return 0;
}