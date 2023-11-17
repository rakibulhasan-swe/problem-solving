#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int operations = 0;
        int last = n;

        for (int i = n - 1; i >= 0; --i) {
            if (a[i] <= last) {
                last = a[i];
            } else {
                operations++;
            }
        }

        if (operations == n) {
            cout << "-1" << endl;
        } else {
            cout << operations << endl;
        }
    }

    return 0;
}
