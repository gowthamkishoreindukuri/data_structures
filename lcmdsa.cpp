#include<bits/stdc++.h>
using namespace std;
int gcd(long long a,long long b)
{
    while(b!=0)
    {
        long long t=a%b;
        a=b;
        b=t;
    }
    return a;
}
int main()
{
    long long a,b;
    cin >> a>>b;
    if(a<b)
    {
        long long temp=a;
        a=b;
        b=temp;
    }
    long long  m=gcd(a,b);
    long long cc=(a*b)/(m);
    cout << cc << endl;
}

