#include <stdio.h>
 
int main(void) {
int n,a,i,j,f;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    scanf("%d",&a);
	f=1;
	for(j=1;j<=a;j++)
   { 
   f=(f*j);
   }
    printf("%d\n",f);
}
}  