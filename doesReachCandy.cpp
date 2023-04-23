#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string directions;
        cin >> directions;
        pair<int,int> cord = {0,0};
        bool flg = false;
        for(int i = 0; i < n; i++){
            if(directions[i] == 'U'){
                cord.second += 1;
                if(cord.first == 1 && cord.second == 1) flg = true;
            }
            else if(directions[i] == 'D'){
                cord.second -= 1;
                if(cord.first == 1 && cord.second == 1) flg = true;
            }
            else if(directions[i] == 'L'){
                cord.first -= 1;
                if(cord.first == 1 && cord.second == 1) flg = true;
            }
            else if(directions[i] == 'R'){
                cord.first += 1;
                if(cord.first == 1 && cord.second == 1) flg = true;
            }
        }
        if(flg) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}