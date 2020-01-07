#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,t,n;
    cout << "enter array size" ;
    cin >> m ;
    int a[m];
    for(int i=0;i<m;i++)
    {
        cin >> a[i];
    }
    cout << "enter array rotation size" << endl;
    cin >> n ;
    for(int j=0;j<n;j++)
    {
        t=a[0];
        for(int k=0;k<m-1;k++)
        {
            a[k]=a[k+1];
        }
        a[m-1]=t;
    }
    for(int l=0;l<m;l++)
    {
        cout << a[l] << endl;
    }
}
