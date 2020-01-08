#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin >> s;
    int a[s],b[s],c[s];
    for(int i=0;i<s;i++)
    {
        cin >> a[i];
    }
    int d;
    cin >> d;
    for(int j=0;j<s;j++)
    {
        if(j<d)
        {
            b[j]=a[d-j-1];
        }
        else
        {
           b[j]=a[s-1-j+d];
        }
    }
    for(int k=0;k<s;k++)
    {
        c[k]=b[s-k-1];
        cout << c[k] << " " ;
    }
}
