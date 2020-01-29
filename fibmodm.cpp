#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    cin >>a>>b;
    n=a%(2^b);
    cout<<n<<endl;
    long long f[n];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<n;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }

}
