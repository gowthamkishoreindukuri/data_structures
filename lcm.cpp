#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i;
    cin >>a>>b;
    if(a>b)
    {
        i=b;
    }
    else{i=a;}
    for(;;)
    {
        if(a==0 || b==0)
        {
            cout <<0<<endl;
            break;
        }
        if((i%a)==0 && (i%b)==0 &&a!=0 &&b!=0)
        {
            cout << i<<endl;
            break;
        }

        i++;
    }
}
