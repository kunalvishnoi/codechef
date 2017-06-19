#include<stdio.h>
int main()
{
int t,i;
long int q,p;
double total;
scanf("%d",&t);
for(i=0;i<t;i++)
 
{
    scanf("%ld%ld",&q,&p);
 
if(q<=1000)
{
    total=p*q;
}
else
{
    total=(q*p)-(q*p*0.1);
}
printf("%0.6lf\n",total);
}   
return 0;
} 