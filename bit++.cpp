#include <iostream>
#include <string>

using namespace std;
#define ll long long

int main()
{

    int t;
    cin >> t;
    int ans = 0;

    while (t--)
    {
        string st;
        cin >> st;

        int cntp = 0, cntn = 0;
        for (char ch : st)
        {
            if (ch == '+')
            {
                cntp++;
            }
            else if (ch == '-')
            {
                cntn++;
            }
        }

        if (cntp > 0)
        {
            ans++;
        }
        else if (cntn > 0)
        {
            ans--;
        }
    }
    cout<<ans<<endl;
    return 0;
}