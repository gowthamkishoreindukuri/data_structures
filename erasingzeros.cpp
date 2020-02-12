#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int cc=0,c=0,cc2=0;
        string s;
        cin>>s;
        int v=s.length();
        for(int j=0;j<s.length();j++)
        {
            if(s[j]=='1')
            {
                c=1;
            }
            if(c==1 && s[j]=='0')
            {
                cc=cc+1;
                if(s[j+1]=='1')
                {
                    cc2=cc2+cc;
                }
            }
        }
        cout<<cc2<<endl;
    }
}
