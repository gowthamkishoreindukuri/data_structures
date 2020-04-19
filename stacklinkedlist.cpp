#include<bits/stdc++.h>
using namespace std;
class sta
{
public:
    int d;
    sta* n;
};
sta* top = NULL;
int push(int x)
{
    sta* nn =new sta();
    nn->d=x;
    nn->n=top;
    top=nn;
}
int peek()
{
    cout<<top->d<<endl;
}
int pop()
{
    top=top->n;
}
int main()
{
    push(2);
    peek();
    push(3);
    peek();
    pop();
    peek();
}
