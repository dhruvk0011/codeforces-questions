#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

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
        ll n, m;
        cin >> n >> m;
        // main code
        if (m > n)
        {
            cout << (n * a) << endl;
        }
        else if (m + 1 == n)
        {
            cout << m * a << endl;
        }
        else
        {
            ll rem = n - m - 1;
            cout << "Rem - " << rem << endl;
            ll sum = m * a + rem * b;
            cout << sum << endl;
        }
    }
    return 0;
}