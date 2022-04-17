#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (int i = 1; i < n; i++)
        {
            int a_diff = abs(a[i] - a[i - 1]);
            int b_diff = abs(b[i] - b[i - 1]);

            int a2_diff = abs(b[i] - a[i - 1]);
            int b2_diff = abs(a[i] - b[i - 1]);

            if (a_diff + b_diff > a2_diff + b2_diff)
            {
                int temp = a[i];
                a[i] = b[i];
                b[i] = temp;
            }
        }

        ll sum = 0;
        for (int i = 1; i < n; i++)
        {
            sum += abs(a[i] - a[i - 1]) + abs(b[i] - b[i - 1]);
        }

        cout<<sum<<endl;
    }
    return 0;
}