#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int maxi = -10000;
    int score[n];
    string name[n];
    map<string, int> mp, mp2;
    for (int i = 0; i < n; i++)
    {
        cin >> name[i] >> score[i];
        mp[name[i]] += score[i];
    }
    for (int i = 0; i < n; i++)
    {
        maxi = max(mp[name[i]], maxi);
    }
    for (int i = 0; i < n; i++)
    {
        mp2[name[i]] += score[i];
        if (mp2[name[i]] >= maxi && mp[name[i]] == maxi)
        {
            cout << name[i];
            break;
        }
    }
    return 0;
}