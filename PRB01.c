#include<stdio.h>
int main()
{
    int t,n,i,j,c;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       c=0;
        scanf("%d",&n);
        for(j=2;j<n;j++)
        {
            if(n%j==0)
            {   c++;
                break;
            }
        }
            if(c!=0)
            printf("no\n");
            else
            printf("yes\n");
    }
    return 0;
} 