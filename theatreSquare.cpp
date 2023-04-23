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
    double n,m,a;
    scanf("%lf %lf %lf", &n,&m,&a);
    printf("%1.lf\n", ceil(n/a)*ceil(m/a));
    return 0;
}