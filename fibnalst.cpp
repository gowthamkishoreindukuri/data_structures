#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int first = 0;
    int second = 1;

    int res;

    for (int i = 2; i <= n; i++) {
        res = (first + second) % 10;
        first = second;
        second = res;
    }
if(n==0)
{
    cout<<first<<endl;
}
else{
    cout << second << '\n';
}


    return 0;
}
