#include <stdio.h>
 
int main(void) {
  int t;
  scanf("%d",&t);
  while(t>0)
  {
      int i,n,k,temp,j;
      scanf("%d",&n);
      scanf("%d",&k);
     int arr[n];
      for(i=0;i<n;i++)
      {
          scanf("%d",&arr[i]);
         
      }
      for(i=0;i<n-1;i++)
      {
          for(j=i+1;j<n;j++)
          {
              if(arr[i]>arr[j])
              {
                  temp=arr[i];
                  arr[i]=arr[j];
                  arr[j]=temp;
              }
          }
      }
      
      printf("%d\n",arr[(n+k)/2]);
      t--;
      
  }
  return 0;
}
