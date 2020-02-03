#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int t=0;
    t=(n/10)+((n%10)/5)+(((n%10)%5));
    cout << t <<endl;
}
