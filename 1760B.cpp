#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        int maxval = INT_MIN;
        for(int i = 0; i < n;i++){
            maxval = max(maxval,(s[i] - 'a') + 1);
        }
        cout << maxval << endl; 
    }
    return 0;
}