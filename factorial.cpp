#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long a[n];
        a[0]=1;
        for(int i=2;i<n+1;i++)
        {
            a[i-1]=a[i-2]*i;
        }
        cout<<a[n-1]<<endl;
    }
}
