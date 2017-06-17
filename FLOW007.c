#include<stdio.h>
int main()
{
	int n,i,r,a,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    c=0;
	    scanf("%d",&a);
	    while(a!=0)
	    {
	        r=a%10;
	        c=c*10+r;
	        a=a/10;
	        
	    }
	    printf("%d\n",c);
	  
	    
	}
	return 0;
} 