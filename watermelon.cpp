#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int w;
    cin >> w;
    if (w <= 2 || w % 2 != 0) cout << "NO" << endl;
	else cout << "YES" << endl;
    return 0;
}