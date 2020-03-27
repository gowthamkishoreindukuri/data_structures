#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       int s,c=0;
       cin>>s;
       int a[s];
       for(int j=0;j<s;j++)
       {
           cin>>a[j];
       }
       int n;
       while(n!=1)
       {
            do {
                    for(int k=0;k<s-1;k++)
                    {
                      for(int jj=k+1;jj<s;jj++)
                        {
                          if(k-a[k]==jj-a[jj])
                        {

                        }
                        else
                        {
                            c=c+1;
                        }
                        }
                    }
                    if(c==0)
                    {
                        for(int ii=0;ii<t;ii++)
                        {
                            cout <<a[ii];
                        }
                        n=1;
                        break;
                    }

               } while (next_permutation(a,a+s) );
       }
    }
}
