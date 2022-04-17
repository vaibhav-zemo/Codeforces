#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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

        string st;
        cin >> st;

        ll ans = 0;
        for (int i = 1; i < st.length(); i++)
        {
            if (st[i] == '0' && st[i - 1] == '0')
            {
                ans += 2;
            }
        }

        for (int i = 2; i < st.length(); i++)
        {
            if (st[i] == '0' && st[i - 1] == '1' && st[i - 2] == '0')
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}