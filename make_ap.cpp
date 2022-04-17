#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{

    long t;
    cin >> t;

    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        bool m1 = true, m2 = true, m3 = true;
        if ((a + c) % 2 == 0 && ((a + c) / 2) % b == 0 && ((a + c) / 2) / b > 0)
        {
            m1 = false;
        }
        if ((2 * b - c) % a == 0 && (2 * b - c) / a > 0)
        {
            m2 = false;
        }
        if ((2 * b - a) % c == 0 && (2 * b - a) / c > 0)
        {
            m3 = false;
        }

        if (!m1 || !m2 || !m3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}