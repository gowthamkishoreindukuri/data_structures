#include<bits/stdc++.h>
using namespace std;
int binary(int a[],int n,int k)
{
    int f=0,l=n-1,mid;
    while(l>=f)
    {
     mid=(f+1)/2;
     if(a[mid]==k)
     {
         cout<<mid<<" ";
         break;
     }
     if(a[mid]>k)
     {
      f=mid+1;
     }
     if(a[mid]<k)
     {
         mid-1;
     }
    }
    cout<<-1<<" ";
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<m;i++)
    {
        binary(a,n,b[i]);
    }
}
