#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] == '0')
        {
            cout << 0 << endl;
            continue;
        }
        int res = (s[0] == '?' ? 9 : 1);
        for (int i = 1; i < s.size(); ++i)
        {
            if (s[i] == '?')
                res *= 10;
        }
        cout << res << endl;
    }
    return 0;
}