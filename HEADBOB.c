#include <stdio.h>
 
int main(void) {
	int t,i,n,j,c;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    char a[n+1];
	    scanf("%s",a);
	    
	    c = 0;
	    for(i = 0; i < n ;i++)
	    {
	        if(a[i] == 'I')
	        {
	            printf("INDIAN\n");
	            c = 1;
	            break;
	        }
	        if(a[i] == 'Y')
	        {
	            printf("NOT INDIAN\n");
	            c = 1;
	            break;
	        }
	    }
	    if(c != 1)
	        printf("NOT SURE\n");
	}
	return 0;
}