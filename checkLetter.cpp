#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        char ch;
        cin >> ch;
        bool flg = false;
        string str = "codeforces";
        for(int i = 0;i < str.size(); i++) {
            if(ch == str[i]){
                cout << "yes" << endl;
                flg = true;
                break;
            }
        }
        if(!flg) cout << "no" << endl;
    }
    return 0;
}