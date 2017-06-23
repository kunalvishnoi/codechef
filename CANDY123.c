#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		int c=1;
		int cb=0,cl=0;
		while(cb<=a&&cl<=b)
		{
			cb=cb+c;
			c=c+1;
			cl=cl+c;
			c=c+1;
		}
		if(cb>a)
		printf("Bob\n");
		else
		printf("Limak\n");
	}
}