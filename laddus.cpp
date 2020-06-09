#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        string o;
        cin>>a>>o;
        int s=0;
        string n;
        int v;
        while(a--)
        {
            cin>>n;
            if(n=="CONTEST_WON")
            {
                cin>>v;
                s=s+300+(v>20?0:20)-v;
            }
            if(n=="TOP_CONTRIBUTOR")2

            {
                s=s+300;
            }
            if(n=="BUG_FOUND")
            {
                cin>>v;
                s=s+v;
            }
            if(n==" CONTEST_HOSTED")
            {
                s=s+50;
            }
        }
        if(o=="INDIAN")
        {
            cout<<s/200<<endl;
        }
        else
        {
            cout<<s/400<<endl;
        }
    }
}
