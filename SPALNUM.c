#include<stdio.h>
int main()
{
int n,s,r,k,t,i,sum,m,c,j;
scanf("%d",&t);
for(j=0;j<t;j++)
{
    sum=0;
 
scanf("%d%d",&n,&m);
 
for(i=n;i<=m;i++)
{
s=0;
k=i;
c=i;
 
while(c>0)
{
r=c%10;
c=c/10;
s=s*10+r;
}
if(k==s)
{
sum=sum+k;
}
}
printf("%d\n",sum);
 
}
 
return 0;
}