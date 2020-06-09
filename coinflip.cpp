#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r;
        cin>>r;
        while(r--)
        {
            int i,g,f;
            cin>>i>>g>>f;
            if(g%2==0)
            {
                cout<<g/2<<endl;
            }
            else
            {
                if(i==f)
                {
                    cout<<g/2<<endl;
                }
                else
                {
                    cout<<(g/2)+1<<endl;
                }
            }
        }
    }
    return 0;
}
