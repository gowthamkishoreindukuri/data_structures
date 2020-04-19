#include<bits/stdc++.h>
using namespace std;
class stac
{
private:
    int t=-1;
public:
    int a[1000];
    bool push(int x);
    bool pop();
    int peek();
    bool isempty();
    bool isfull();
};
bool stac::push(int x)
{
    if(!(isfull()))
    {
        a[++t]=x;
    }
    else
    {
        return false;
    }
}
bool stac::pop()
{
    if(!(isempty()))
    {
        t--;
    }
    else
    {
        return false;
    }
}
int stac::peek()
{
    if(!(isempty()) && !(isfull()))
    {
         cout<<a[t]<<endl;
    }
   else
   {
       return false;
   }
}
bool stac::isempty()
{
    if(t<0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool stac::isfull()
{
    if(t>=999)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    stac s;
    s.push(4);
    s.peek();
     s.push(100);
    s.peek();
     s.push(2);
    s.peek();
    s.push(3);
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    s.pop();
    s.pop();
    s.peek();
    s.peek();

}
