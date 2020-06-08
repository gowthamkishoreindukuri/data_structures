#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int c=1;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>=a[i+1])
            {
                c++;
            }
            else
            {
                a[i+1]=a[i];
            }
        }
        cout<<c<<endl;
    }
}
