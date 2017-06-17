#include <stdio.h>
int z[1000001] = {0};
int main()
{
  int i,n,temp;
  scanf("%d",&n);
  for (i=0;i<n;i++)
  {
    scanf("%d",&temp);
    z[temp]++;
  }
 
  for (i=0;i<1000001;i++){
    while(z[i]>0){
      printf("%d\n",i);
      z[i]--;
    }
  }
}    