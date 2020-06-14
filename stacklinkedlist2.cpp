#include<bits/stdc++.h>
using namespace std;
class nd
{
    public:
    int da;
    nd* n;
};
nd* bk = NULL;
nd* st= NULL;
int s=0;
void push(int d)
{
    cout<<'k'<<" ";
    if(s==0)
    {
     nd* nn =new nd();
    nn->da=d;
    nn->n=NULL;
    st=nn;
    bk=nn;
    s++;
    }
    else
    {
        nd* nn =new nd();
    nn->da=d;
    nn->n=NULL;
    bk->n=nn;
    bk=nn;
    s++;
    }

}
void pop()
{
    nd* nn =new nd();
    nn=st;
    while(nn->n==NULL)
    {
        nn=nn->n;
    }
    bk=nn;
    s--;
}
void size()
{
    cout<<s<<endl;
}
void print()
{
     nd* nn =new nd();
    nn=st;
    while(nn==NULL)
    {
        cout<<nn->da<<" ";
        nn=nn->n;
    }
    cout<<endl;
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    print();

}
