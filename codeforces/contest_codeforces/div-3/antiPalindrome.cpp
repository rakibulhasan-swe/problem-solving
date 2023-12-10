#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < n / 2; i++) {
            if (s[i] == s[n - i - 1]) {
                cnt++;
            }
        }
        if (cnt == 0) {
            cout << 0 << endl;
        } else if (cnt == 1 && n % 2 == 1) {
            cout << (n / 2) << endl;
        } else {
            cout << 1 << endl;
        }
    }
    return 0;
}

