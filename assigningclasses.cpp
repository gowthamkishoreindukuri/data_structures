#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v;
    cin>>v;
    for(int h=0;h<v;h++)
    {
    int n;
    cin >>n;
    int j=2*n;
    int a[j];
    for(int i=0;i<j;i++)
    {
        cin >>a[i];
    }
    sort(a,a+j);
    cout <<a[n]-a[n-1]<<endl;
    }

}
