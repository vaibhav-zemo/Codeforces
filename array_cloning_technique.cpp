#include <iostream>
#include <vector>
#include <unordered_map>
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
        int l = n;
        unordered_map<int, int> map;
        int maxc = -1;
        while (n--)
        {
            int a;
            cin >> a;

            map[a]++;
            maxc = max(maxc, map[a]);
        }

        if (map.size() == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            int sum = 0, cnt = maxc;
            while ((cnt << 1) <= l)
            {
                sum += 1 + cnt;
                cnt = cnt << 1;
            }
            sum += (cnt == l) ? 0 : (1 + l - cnt);
            cout << sum << endl;
        }
    }
    return 0;
}