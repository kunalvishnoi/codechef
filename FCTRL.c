#include <stdio.h>
 
int main()
 {
    int t,n,count;
        scanf(" %d",&t);
    while(t--)
    {
        scanf(" %d",&n);
        int count=0;
        while(n)
        {
            n=n/5;
            count=count+n;
 
        }
 
        printf("%d\n",count);
    }
        return 0;
} 