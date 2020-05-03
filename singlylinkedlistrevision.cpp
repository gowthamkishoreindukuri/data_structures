#include<bits/stdc++.h>
using namespace std;

class lst
{
public:
    int d;
    lst* n;
};
int c=0;
lst* hed= NULL;
lst* til=NULL;
int adf(int x)
{
    c++;
    if(hed==NULL)
    {
    lst* nn = new lst();
    nn->d=x;
    nn->n=NULL;
    hed=nn;
    til=nn;
    }
    else
    {
    lst* nn = new lst();
    nn->d=x;
    nn->n=hed;
    hed=nn;
    }
}

int adb(int x)
{
    c++;
    if(til==NULL)
    {
    lst* nn = new lst();
    nn->d=x;
    nn->n=NULL;
    hed=nn;
    til=nn;
    }
    else
    {
    lst* nn = new lst();
    nn->d=x;
    nn->n=NULL;
    til->n=nn;
    til=nn;
    }
}

int adm(int x,int lo)
{
    if(lo<=c)
    {
    lst* tmp=hed;
    lst* tmp2;
    while(tmp!=NULL && lo--)
    {
        tmp2=tmp;
        tmp=tmp->n;
    }
    lst* nn = new lst();
    nn->d=x;
    tmp2->n=nn;
    nn->n=tmp;
    }
    else
    {
    cout<<"out of memory"<<endl;
    }
}
def()
{
    c--;
    if(hed==NULL)
    {
  cout<<"no elements"<<endl;
    }
    else
    {
    lst* tmp;
    tmp=hed;
    hed=tmp->n;
    free(tmp);
    }
}

del()
{
    c--;
     if(til==NULL)
    {
  cout<<"no elements"<<endl;
    }
    else
    {
    lst* tmp=hed;
    lst* tmp2=hed;
    tmp=tmp->n;
    tmp=tmp->n;
    while(tmp!=NULL)
    {
     tmp2=tmp2->n;
     tmp=tmp->n;
    }
    tmp2->n=NULL;
    til=tmp2;
    free(tmp);
    }
}
dem(int po)
{
    lst* tmp=hed;
    lst* tmp2=hed;
    tmp=tmp->n;
    tmp=tmp->n;
    while(po--)
    {
     tmp2=tmp2->n;
     tmp=tmp->n;
    }
    tmp2->n=tmp->n;
    free(tmp);
}
delt()
{

}


print(lst* hed)
{
    lst* nod;
    nod=hed;
    while(nod!=NULL)
    {
        cout<<nod->d<<" ";
        nod=nod->n;
    }
    cout<<endl;
}


int main()
{
   adf(1);
  adf(11);
   adf(111);
   adf(1111);
   adf(11111);
   adb(2);
   adb(3);
   adb(5);
   adb(6);
    print(hed);
    adm(4,7);
print(hed);
def();
print(hed);
del();
print(hed);
def();
print(hed);
del();
print(hed);
dem(3);
print(hed);
}
