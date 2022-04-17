#include <iostream>
#include <set>
using namespace std;
#define ll long long

int main()
{

    long t;
    cin >> t;

    while (t--)
    {
        long n;
        cin >> n;

        long l = n;
        set<ll> s;
        while (n--)
        {
            ll a;
            cin >> a;

            s.insert(a);
        }

        long m = s.size();
        for (int i = 1; i <= l; i++)
        {
            if (m / i)
            {
                cout << m << " ";
            }
            else
            {
                cout << i << " ";
            }
        }
        cout<<endl;
    }
    return 0;
}