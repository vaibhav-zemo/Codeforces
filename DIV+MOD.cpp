#include <iostream>
#include<algorithm>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        ll l, r, a;
        cin >> l >> r >> a;

        if (l / a == r / a)
        {
            cout << (r / a + r % a)<<endl;
        }
        else
        {
            cout << max((r / a + r % a), (r / a - 1 + a - 1))<<endl;
        }
    }
    return 0;
}