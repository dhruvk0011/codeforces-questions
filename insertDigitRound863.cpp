#include <bits/stdc++.h>
using namespace std;
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    int t, f;
    cin >> t;
    while (t--)
    {
        f = 0;
        int l, d, i;
        cin >> l >> d;
        char s[200005];
        cin >> s;
        for (i = 0; i < l; i++)
        {
            if (s[i] - '0' < d && f == 0)
            {
                f = 1;
                cout << d;
            }
            cout << s[i];
        }
        if (f == 0)
            cout << d;
        cout << endl;
    }
    return 0;
}