#include <iostream>
#include <math.h>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        ll x1, p1, x2, p2;
        cin >> x1 >> p1 >> x2 >> p2;

        int cnt1 = 0, cnt2 = 0;
        int x = x1, y = x2;
        while (x)
        {
            cnt1++;
            x /= 10;
        }

        while (y)
        {
            cnt2++;
            y /= 10;
        }

        if ((cnt1 + p1) < (cnt2 + p2))
        {
            cout << "<" << endl;
        }
        else if ((cnt1 + p1) > (cnt2 + p2))
        {
            cout << ">" << endl;
        }
        else
        {
            int diff = abs(cnt1 - cnt2);
            if (cnt1 > cnt2)
            {
                for (int i = 0; i < diff; i++)
                {
                    x2 *= 10;
                }
            }
            else if (cnt1 < cnt2)
            {
                for (int i = 0; i < diff; i++)
                {
                    x1 *= 10;
                }
            }

            if (x1 == x2)
            {
                cout << "=" << endl;
            }
            else if (x1 > x2)
            {
                cout << ">" << endl;
            }
            else
            {
                cout << "<" << endl;
            }
        }
    }
    return 0;
}