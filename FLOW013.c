#include<stdio.h>
int main()
{
int a,b,c,n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d%d%d",&a,&b,&c);
if(((a+b+c)==180) &&  (a>0) && (b>0) && (c>0))
printf("YES\n");
else
printf("NO\n");
 
}
return 0;
}