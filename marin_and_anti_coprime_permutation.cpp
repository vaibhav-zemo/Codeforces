#include <iostream>
using namespace std;
#define ll long long
#define mod 998244353

ll factorial(ll n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return ((n * (factorial(n - 1) % mod)) % mod);
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n % 2 != 0)
        {
            cout << 0 << endl;
        }
        else
        {
            ll ans = ((factorial(n / 2) * (factorial((n / 2) - 1)) % mod) * (n / 2));
            cout << (ans % mod) << endl;
        }
    }
    return 0;
}