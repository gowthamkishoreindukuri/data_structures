#include<bits/stdc++.h>
using namespace std;
int main()
{
   int m;
   cin >>m;
   for(int j=0;j<m;j++)
   {
    int n,z=0,gs=0,ls=0,m1;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >>a[i];
        if(a[i]==0)
        {
            z=z+1;
        }
        else if(a[i]>0)
        {
            gs=gs+a[i];
        }
        else if(a[i]<0)
        {
            ls=ls+a[i];

        }
    }
    m1=ls+gs;
    if((gs+ls)==0 && z==0)
    {
        cout << 1 <<"\n";
    }
    else if((gs+ls)!=0 && z==0)
    {
        cout << 0 <<"\n";
    }
    else if((gs+ls)==0 && z!=0)
    {

        cout << max(m1,z) <<"\n";
    }
    else if((gs+ls)!=0 && z!=0)
    {
        if(gs+ls+z==0)
        {
            cout << 1+z <<"\n";
        }
        else
        {
                   cout << z <<"\n";

        }
    }
   }
return 0;
}
