#include<stdio.h>
int main()
{
	int n,i,r,a,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    s=0;
	    scanf("%d",&a);
	    while(a!=0)
	    {
	        r=a%10;
	        s=s+r;
	        a=a/10;
	    }
	    printf("%d\n",s);
	}
	return 0;
} 
 