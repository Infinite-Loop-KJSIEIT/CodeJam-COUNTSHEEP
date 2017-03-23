#include <stdio.h>

int main(void)
{
	int test;
	printf("enter no of test cases\n");
	scanf("%d",&test);
	while(test--)
	{
	    int a[10],i,sum=0,n,x=0;
	    for(i=0;i<10;i++)
        {
            a[i]=0;
        }
	    printf("enter no\n");
	    scanf("%d",&n);
	    if(n==0)
	    {
	        printf("INSOMNIA");
	    }
	    else
	    {
	       while(sum!=10)
                {
                    x += n;
                    int t = x;
                    while(t!= 0)
                    {
                        a[t%10] = 1;
                        t /= 10;
                    }
                   sum=0;
                   for(i=0;i<10;i++)
                   {
                   sum=sum+a[i];
                   }
                }
	        printf("last number is %d\n",x);
	    }
	}
	return 0;
}



