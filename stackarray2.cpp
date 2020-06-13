#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int d;
    node* n;
};
int s=0;
node* top=NULL;
node* head = NULL;
void push(int d)
{
    if(s==0)
    {
    node* nn =new node();
    nn->d=d;
    nn->n=NULL;
    head=nn;
    top=nn;
    s++;
    }
    else
    {
    node* nn =new node();
    nn->d=d;
    nn->n=NULL;
    top->n=nn;
    top=nn;
    s++;
    }
}
void pop()
{

}
void print(node* head)
{
    node* nn =new node();
    nn=head;
    while(nn!=NULL)
    {
        cout<<nn->d<<" ";
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
    push(6);
    push(7);
    print(head);

}
