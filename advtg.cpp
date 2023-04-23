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
        int n;
        cin >> n;
        vector<long> a(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int maxVal = INT_MIN, minVal = INT_MIN;
        for(auto it : a){
            if(it > maxVal) {
                minVal = maxVal;
                maxVal = it;
            }
            else if(it > minVal) minVal = it;
        }
        for(auto it : a){
            if(it == maxVal) cout << maxVal - minVal << " ";
            else cout << it - maxVal << " ";
        }
        cout << endl;
    }
    return 0;
}