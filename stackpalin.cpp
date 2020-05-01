#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> ss;
    string s;
    char c='\n';
    getline(cin,s);
    int i=0;

    do
    {
        char c=s[i];
        ss.push(c);
        i++;
    }
    while(c!='X');
    while(c!=ss.top())
    {
        c=[i];
        ss.pop();
    }
}
