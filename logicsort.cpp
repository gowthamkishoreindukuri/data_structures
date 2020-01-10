#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7,8},c=0;
    int n=sizeof(a)/sizeof(a[0]);
    int b[n];
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[i]=a[i];
        }
        c=c+1;

    cout << a[i] << "  ";
    }

}
