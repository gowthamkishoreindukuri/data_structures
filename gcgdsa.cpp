#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    while(b!=0)
    {
        int t=a%b;
        a=b;
        b=t;
    }
    return a;
}
int main()
{
    int a,b;
    cin >> a>>b;
    if(a<b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    cout <<gcd(a,b)<<endl;
}
