#include<bits/stdc++.h>
using namespace std;
int bit(int a[],int n)
{
    int a1=a[0],b=a[1],s;
    for(int j=1;j<n;j++)
    {
       s=(a1|b)-b;
       a1=s;
       b=a[j+1];
    }
    return a1;
}
int main()
{
    int n,m=0,c;

    cin >>n;
    int a[n],b[n];
    set<int>igk;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
                igk.insert(a[i]);

    }
    int a1;
    sort(a, a + n);
    c=igk.size();
    if(c!=1)
    {
        do {
		a1=bit(a,n);
		if(m<a1)
        {
         for(int jj=0;jj<n;jj++)
           {
             b[jj]=a[jj];
            }
        }
	} while (next_permutation(a, a + n));
	     for(int jjj=0;jjj<n;jjj++)
           {
             cout << b[jjj]<<" ";
        }
    }
else{
   for(int jjj=0;jjj<n;jjj++)
           {
             cout << a[jjj]<<" ";
        }
}

        return 0;
}



