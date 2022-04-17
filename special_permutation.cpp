#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        set<int> s;
        vector<int> v;
        v.push_back(a);
        s.insert(a);
        int cnt = n;
        int c = 0;
        while (c < (n / 2) - 1)
        {
            if (b != cnt)
            {
                v.push_back(cnt);
                s.insert(cnt);
                c++;
            }
            cnt--;
        }

        v.push_back(b);
        s.insert(b);
        c = 0;
        cnt = 1;
        while (c < (n / 2) - 1)
        {
            if (a != cnt)
            {
                v.push_back(cnt);
                s.insert(cnt);
                c++;
            }
            cnt++;
        }

        if (s.size() < n)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int x : v)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}