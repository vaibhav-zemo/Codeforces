#include <iostream>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        long n;
        cin >> n;

        ll b, x, y;
        cin >> b >> x >> y;

        ll a = 0, sum = 0;
        while (n--)
        {
            if (a + x <= b)
            {
                a += x;
            }
            else
            {
                a -= y;
            }
            sum += a;
        }
        cout << sum << endl;
    }
    return 0;
}