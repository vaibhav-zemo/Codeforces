#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define ll long long

void del(string &st, char pos)
{
    int it = st.find(pos);
    for (int i = it; i < st.length() - 1; i++)
    {
        st[i] = st[i + 1];
    }
    st.erase(st.length() - 1);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s, t, temp;
        cin >> s >> t;
        temp = s;
        int k = 0, i = 0;
    
        while (i < temp.length() && k < t.length())
        {
            if (temp[i] != t[k])
            {
                del(s, temp[i]);
                i++;
                continue;
            }
            k++;
            i++;
        }

        while (i < temp.length())
        {
            del(s, temp[i]);
            i++;
        }

        if (s == t && k==t.size())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}