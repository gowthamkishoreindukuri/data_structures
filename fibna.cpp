#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int ff[n];
    ff[0]=0;
    ff[1]=1;
    for(int i=2;i<=n;i++)
    {
        ff[i]=ff[i-1]+ff[i-2];
    }
    cout << ff[n];
}
