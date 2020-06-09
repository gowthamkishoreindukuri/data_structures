#include <iostream>
using namespace std;
int main()
{
    long long t;

    cin >> t;
    while (t--)
    {
        int k = 0;
        long long num;

        cin >> num;
        while (num / 5 != 0)
        {
            k = k + num / 5;
            num = num / 5;
        }
            cout << k << endl;
    }
}
