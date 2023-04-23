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
    int test_case,proSolved = 0; cin >> test_case;
    while(test_case--){
        int a,b,c;
        cin >> a >> b >> c;
        if((a+b+c) > 1) proSolved++;
    }
    cout << proSolved << endl;
    return 0;
}