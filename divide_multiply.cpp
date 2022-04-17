#include <iostream>
#include <algorithm>
#include<math.h>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        unsigned ll n;
        cin >> n;

        ll x = 0, sum = 0, mx = -1;
        while (n--)
        {
            ll a;
            cin >> a;
            if (a % 2 == 0)
            {
                while (a % 2 == 0)
                {
                    x++;
                    a /= 2;
                }
            }
            sum += a;
            mx = max(mx,a);
        }
        sum -= mx;
        sum += mx*pow(2,x);
        cout<<sum<<endl;
    }
    return 0;
}