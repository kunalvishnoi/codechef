  #include<stdio.h>
    #include<math.h>
    int main()
    {
    	int i,n, a, b, max=-1, score1=0, score2=0, index ;
    	scanf("%d",&n);
    	for( i=0;i<n;++i)
    	{
    		scanf("%d %d",&a,&b);
    		score1+=a;
    		score2+=b;
    		if(abs(score1-score2)>max)
    		{
    			max=abs(score1-score2);
    			if(score1>score2)
    				index=1;
    			else
    				index=2;
    		}
    	}
    	printf("%d %d",index, max);
    	return 0;
    } 