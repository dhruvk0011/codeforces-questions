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
    int test_case;
    cin >> test_case;
    while(test_case--){
        string s;
        cin >> s;
        int l = s.length();
        if(l > 10) cout << s.at(0)<< l-2 << s.at(l-1)<< endl;
        else cout << s << endl;
    }
    return 0;
}