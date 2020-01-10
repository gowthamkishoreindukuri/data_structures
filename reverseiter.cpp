#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int b[n];
    for(int i=0;i<n;i++)
    {
        b[i]=a[n-i-1];
        cout << b[i] <<"  ";
    }

}

