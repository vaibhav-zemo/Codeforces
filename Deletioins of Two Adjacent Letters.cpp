#include <iostream>
#include <string>
#include <map>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string st;
        cin >> st;
        char ch;
        cin >> ch;

        map<int, int> map;
        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] == ch)
            {
                map[i]++;
            }
        }

        int end = st.size() - 1;
        bool flag = true;
        for (auto it = map.begin(); it != map.end(); it++)
        {
            if (it->first % 2 == 0 && (end - it->first) % 2 == 0)
            {
                flag = false;
                cout << "YES" << endl;
                break;
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}