#include<bits/stdc++.h>
using namespace std;
class stk
{
public :
    int d;
    stk* n;
};
int s;
int c;
stk* hed=NULL;
stk* top=NULL;
int push(int x)
{
    if(s==0)
    {
        cout<<" memory error"<<endl;
        return 0;
    }
    if(c==0)
    {
    stk* nn =new stk();
    nn->d=x;
    nn->n=NULL;
    hed=nn;
    top=nn;
    c++;
    }
    else
    {
    stk* nn =new stk();
    nn->d=x;
    nn->n=NULL;
    top=nn;
    c++;
    }
    s--;
}
int pop()
{
    if(c==0)
    {
        cout<<"error"<<endl;
    }
    else
    {
        stk* tmp = new stk();
        stk* tmp2 = new stk();
        tmp=hed;
        tmp2=hed;
        tmp=tmp->n;
        while(tmp!=NULL)
        {
            tmp=tmp->n;
            tmp2=tmp2->n;
        }
        top=tmp2;
        free(tmp);
        free(tmp2);
        c--;
    }
}
int toop()
{
    if(c==0)
    {
        cout<<"NO elements"<<endl;
    }
    else
    {
        cout<<top->d<<endl;
    }
}
int sizze()
{
    cout<<c<<endl;
}
bool isempty()
{
    if(top==NULL && hed==NULL)
    {
       return true;
    }
    return false;
}
bool isfull()
{
    if(s==0)
    {
        return true;
    }
    return false;
}
int main()
{
    c=0;
     s=20;
    push(1);
    pop();
    toop();
    push(1);
    toop();
    push(2);
    toop();
    push(3);
    toop();
    push(4);
    toop();
    cout<<"size is = ";
    sizze();
    cout<<(if(isempty()){cout<<"yes"}else {cout<<"no"})<<endl;
    //isfull();
}
