#include <iostream>
using namespace std;
#define ll long long

int main()
{
    int m, n;
    cin >> m >> n;

    if (m % 2 == 0)
    {
        cout << (m / 2) * n;
    }
    else if (m % 2 != 0)
    {
        cout << (m / 2) * n + n / 2;
    }

    return 0;
}