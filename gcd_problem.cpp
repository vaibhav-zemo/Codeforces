#include <iostream>
using namespace std;
#define ll long long

ll gcd(ll a, ll b)
{
    if (a == 0)
    {
        return b;
    }
    else
    {
        return gcd(b % a, a);
    }
}

int main()
{

    long t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll left = n - 1;

        if (left % 2 != 0)
        {
            cout << 2 << " " << left - 2 << " " << 1 << endl;
        }
        else
        {
            for (int i = 3; i <= left - 2; i += 2)
            {
                ll rem = left - i;
                ll check = gcd(i, rem);
                if (check == 1)
                {
                    cout << i << " " << rem << " " << 1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}