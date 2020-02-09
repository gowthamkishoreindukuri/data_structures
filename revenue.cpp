#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0;
    cin >>n;
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int k=0;k<n;k++)
    {
        cin>>b[k];
    }
    sort(a,a+n);
    sort(b,b+n);
    for(int j=0;j<n;j++)
    {
        s=s+a[j]*b[j];
    }
    cout << s <<'\n';
}

