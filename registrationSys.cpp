#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>
#include <ctime>
#include <fstream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test_case; cin >> test_case;
    map <string, int> db;
    string s;
    while (test_case--){
        cin >> s;
        if(db.count(s) == 0) {
            cout << "OK" << endl;
            db[s] = 1;
        }
        else {
            cout << s << db[s] << endl;
            db[s] += 1;
        }
    }
    return 0;
}