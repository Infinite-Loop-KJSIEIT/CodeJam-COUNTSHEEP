#include <iostream>
using namespace std;

int main()
{
	int test;
	cin>>test;
	for(int j=1;j<=test;j++)
	{
	    int n,m=0;
	    cin>>n;
	    if(n==0)
	    {
	        cout<<"Case #"<<j<<": INSOMNIA"<<endl;
	    }
	    else
	    {
	        int a[10],i,sum;
	        for(i=0;i<10;i++)
	        {
	            a[i]=0;
	        }
        do
            {
                m += n;
                int temp= m;
                while(temp!= 0)
                    {
                        a[temp%10] = 1;
                        temp/= 10;
                    }
                    sum=0;
                for(i=0;i<10;i++)
                    {
                        sum=sum+a[i];
                    }
            }while(sum!= 10);
            cout<<"Case #"<<j<<": "<<m<<endl;
        }
    }
}
