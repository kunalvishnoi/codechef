#include <stdio.h>
 
int main(void) 
{
	int x;
	float y,r;
	
		scanf("%d %f", &x, &y);	
		r = (float)(y-x-0.5);
	if(0 < x <= 2000 && 0<= y <= 2000)
	{
		if(x%5 == 0 && (float)(y-x)>=0.5)
		{
			printf("%0.2f", r);
		}
		else
		{
			printf("%0.2f", y);
		}
	}	
	return 0;
}  
 