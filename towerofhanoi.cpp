#include<bits/stdc++.h>
using namespace std;
void toh(int n,char fr,char tr,char ar)
{
if (n == 1)
    {
        cout << "Move disk 1 from rod " << fr <<
                            " to rod " << tr<<endl;
        return;
    }
    toh(n - 1, fr, ar, tr);
    cout << "Move disk " << n << " from rod " << fr <<
                                " to rod " << tr << endl;
    toh(n - 1, ar, tr, fr);
}
int main()
{
    int n;
    cin>>n;
    toh(n,'A','C','B');
}
