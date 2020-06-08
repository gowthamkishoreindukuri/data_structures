#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        for(int i=0;i<(n/2);i++)
        {
            for(int j=((n/2)+(n%2));j<n;j++)
            {
                if(s[i]==s[j])
                {
                    cout<<s[i];
                    s[i]='0';
                    s[j]='0';
                    break;
                }
            }
        }
        int c=0;
        if(n%2==0)
        {
            for(int i=0;i<n;i++)
            {

                if(!(s[i]=='0'))
                {
                    c++;
                }
            }
            if(c==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(!(s[i]=='0'))
                {
                    c++;
                }
            }
            if(c==1 )
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
