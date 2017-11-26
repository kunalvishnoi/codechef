#include <stdio.h>
 
int main(void) {
  int t;
  scanf("%d",&t);
  while(t>0)
  {
    int N,P,i,arr[500];
    int a=0,b=0;
    scanf("%d",&N);
    scanf("%d",&P);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=1;i<=N;i++)
    { if((arr[i])>=(P/2))
     a++;
     else if((arr[i])<=(P/10))
     b++;
    }
    
    if((a==1)&&(b==2))
    printf("yes\n");
    else
    printf("no\n");
    t--;
  
     
     
      
  }
  return 0;
}
 
