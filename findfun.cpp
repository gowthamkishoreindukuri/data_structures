#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ll;
    cin >>n;
    vector<int> a[n];
    for(int i=0;i<n;i++)
    {
        cin >> ll;
         a[i]=ll;
    }
    int k;
    cin >>k;
    int y=find(a.begin(),a.end(),k);
    cout <<y+1<<endl;
}
