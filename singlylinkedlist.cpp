#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int d;
    node* n;
};
node* top=NULL;
node* head=NULL;
int c=0;
int insertf(int x)
{
    if(head==NULL)
    {
        node* nn=new node();
        nn->d=x;
        nn->n=NULL;
        top=nn;
        head=nn;
        c++;
    }
    else
    {
        node* nn=new node();
        nn->d=x;
        nn->n=head;
        head=nn;
        c++;
    }


}
int insertl(int x)
{

    if(top==0)
    {
        node* nn=new node();
        nn->d=x;
        nn->n=NULL;
        top=nn;
        head=nn;
        c++;
    }
    else
    {
        node* nn=new node();
        nn->d=x;
        nn->n=NULL;
        top->n=nn;
        top=nn;
        c++;
    }

}
insertm(int x,int pos)
{
    node* temp=head;
  if(pos<=c)
  {
      while(pos--)
      {
          temp=temp->n;
      }
      node* temp1;
      node* temp2;
      temp1=temp;
      temp=temp->n;
      temp2=temp;
      node* nn=new node();
      nn->d=x;
      nn->n=temp2;
      temp1->n=nn;
  }
}
int print( node* head )
{
  while(head!=NULL)
  {
      cout<<head->d<<endl;
      head=head->n;
  }
}
int main()
{
    insertl(1);
    insertl(2);
    insertl(3);
    insertf(10);
    insertf(100);
    insertm(12009,3);
    print(head);
    cout<<c<<" hhhhhh" <<endl;
}
