#include<stdio.h>
int main()
{
	int n,a,l;
	scanf("%d",&n);
	while(n>0)
	{
		scanf("%d",&a);
		l=a%10;
		while(a>9)
		a=a/10;
		printf("%d\n",a+l);
		n--;
	}
	return 0;
	}
 