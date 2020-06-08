#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long v=0,t;
    for(int i=0;i<n;i++)
    {
        t=a[i]*(n-i);
        if(v<t)
        {
            v=t;
        }
    }

    cout<<v<<endl;
}
