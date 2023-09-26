// https://codeforces.com/problemset/problem/1618/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<long long> b(7);
        for (int i = 0; i < 7; i++) {
            cin >> b[i];
        }

        // Calculate a3
        long long a3 = b[0];

        // Calculate a2
        long long a2 = b[1];

        // Calculate a1
        long long a1 = b[6]-a3-a2;

        cout << a1 << " " << a2 << " " << a3 << endl;
    }

    return 0;
}
