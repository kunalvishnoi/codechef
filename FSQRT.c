#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a);
	    a=sqrt(a);
	    printf("%d\n",a);
	}
	return 0;
} 
 