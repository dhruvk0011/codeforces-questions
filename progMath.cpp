#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << (a + b) / 4 << endl;
        }
        else
        {
            int countTeams = 0;
            while (a > 0 && b > 0)
            {
                // cout << a << " " << b << endl;
                if (((a % 4) + 1) > 1 && ((b % 4) + 1) > 1)
                    countTeams++;
                a -= 4;
                b -= 4;
            }
            cout << countTeams << endl;
        }
    }
    return 0;
}