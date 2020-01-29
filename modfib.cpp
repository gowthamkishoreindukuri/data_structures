#include <iostream>
using namespace std;
int main() {
    long long n,m;
    cin >> n>>m;
    int first = 0;
    int second = 1;

    int res;

    for (long long i = 2; i <= n; i++) {
        res = (first + second) % 100000;
        first = second;
        second = res;
    }
cout <<  second%m <<endl;

    return 0;
}

