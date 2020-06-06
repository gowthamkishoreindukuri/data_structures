#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,d;
    cin>>t;
    while(t--)
    {
        int c=0;
        cin>>n;
     while(n>0)

     {
         d=n%10;
         if(d==0 && c==0)
         {

             c++;
         }
         if(c>0 || d>0)
         {
             cout<<d;
         }
         n=n/10;
     }
        cout<<endl;
    }
    return 0;
}
