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
        string st;
        cin >> st;
        st += st;
        int longest = 0, current = 0;
        for (char ch : st)
        {
            current = (ch == '1') ? current + 1 : 0;
            longest = max(longest, current);
        }
        int l = st.size() / 2;
        if (longest > l)
        {
            cout << (long long)l * l << endl;
        }
        else
        {
            long long side_1 = (longest + 1) / 2;
            long long side_2 = (longest + 2) / 2;
            cout << side_1 * side_2 << endl;
        }
    }
    return 0;
}
