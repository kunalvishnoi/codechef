#include<stdio.h>
int main()
{
	int a,n,c;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		c = 0;
		while(a)
		{
			if(a%10==4)
			{
				c++;
			}
			a = a/10;
		}
		printf("%d\n",c);
	}
	return 0;
}   