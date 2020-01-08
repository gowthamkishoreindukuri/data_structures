#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,5,3,4,6,7,8,99},c=0,s1,s2,key=109;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n-1;i++)
    {
        s1=a[i];
        for(int j=i;j<n;j++)
            s2=a[j];
        if((s1+s2)==key)
        {
            c=c+1;
        }
    }
    if(c>0)
    {
        printf("yes");
    }
    else{printf("no");}
}
