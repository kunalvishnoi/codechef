#include<stdio.h>
int main()
{
	int n,i,r,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    r=0;
	    scanf("%d",&a);
	    scanf("%d",&b);
	    if(b!=0)
	    {
	        r=a%b;
	    }
	    printf("%d\n",r);
	  
	    
	}
	return 0;
} 
 