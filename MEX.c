#include <stdio.h>
 
int main(void) {
  int T,i;
  
  scanf("%d",&T);
  while(T>0)
  {
  int max;
     int n,k;    
     scanf("%d",&n);
     scanf("%d",&k);
     int arr[n];
     for(i=0;i<n;i++)
     scanf("%d",&arr[i]);
     max=arr[0];
     
     for(i=1;i<n;i++)
     {
     if(arr[i]>max)
     max=arr[i];
     }
    
     int a[max+1];
     for(i=0;i<max+1;i++)
     { a[i]=max+1;
     }
     for(i=0;i<n;i++)
     {
       a[arr[i]]=arr[i];  
     }
     
     for(i=0;i<max+1;i++)
     {
         if(a[i]==max+1)
         {
             k--;
             if(k==-1)
             {
                 break;
             }
             
         }
         
     }
     if(k>0)
     printf("%d\n",i+k);
     else
     printf("%d\n",i);
      T--;
  }
  return 0;
}  
