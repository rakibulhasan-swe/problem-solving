#include <bits/stdc++.h>
using namespace std;

int max(int x, int y) {
    return x > y ? x : y;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << max(a + b, c + d) << "\n";
    }
    
    return 0;
}