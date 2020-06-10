 #include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t,i=0;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    long long int K,d0,d1,sum=0,k=0,d=0,c=0,sum2=0,sum1=0;
	    cin>>K>>d0>>d1;
	    d=(d0+d1)%10;
	    sum=(d0+d1)%3;
	    sum=sum+(d)%3;
	    k=(d*2)%10;
	    d=k;
	    if(K==2)
	    {
	        if(sum%3==0)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	        continue;
	    }
	    sum1=sum1+k;
	    k=(d*2)%10;
	    c++;
	    while(k!=d)
	    {
	     sum1=sum1+k;
	     k=(k*2)%10;
	     c++;
	    }
	    for(k=1;k<=((K-3)%c);k++)
	    {
	    sum2=sum2+d;
	    d=(d*2)%10;
	    }
	    sum=sum+(((K-3)/c)*sum1)%3+sum2%3;
	    if(sum%3==0)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
