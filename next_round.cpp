#include <iostream>
using namespace std;
#define ll long long

int main()
{

    int n, k;
    cin >> n >> k;

    int cnt = 0;
    int ans = 0;
    int pre = 0;
    while (n--)
    {
        int a;
        cin >> a;

        cnt++;

        if (cnt <= k && a > 0)
        {
            ans++;
            pre = a;
        }
        else if (cnt > k && a > 0 && a == pre)
        {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}