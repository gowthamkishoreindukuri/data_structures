#include<bits/stdc++.h>
using namespace std;
int a[100];
int i=0;
void push(int d)
{
 a[i]=d;
 i++;
}
int pop()
{

    i--;
}
bool isempty()
{
    if(i==0)
    {
        return 1;
    }
    return 0;
}
bool isfull()
{
    if(i==99)
    {
        return 1;
    }
    return 0;
}
int size()
{
    cout<<"size is "<<i+1<<endl;;
}
void print()
{
    for(int j=0;j<i;j++)
    {
        cout<<a[j]<<" ";
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
    size();
    pop();
    pop();
    print();
    size();

}
