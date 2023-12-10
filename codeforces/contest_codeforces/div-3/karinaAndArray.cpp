#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long max1 = LLONG_MIN, max2 = LLONG_MIN;
        long long min1 = LLONG_MAX, min2 = LLONG_MAX;
        for (int i = 0; i < n; i++) {
            if (a[i] >= 0) {
                max2 = max(max2, a[i]);
                if (max2 > max1) {
                    swap(max1, max2);
                }
            } else {
                min2 = min(min2, a[i]);
                if (min2 < min1) {
                    swap(min1, min2);
                }
            }
        }
        if (min1 == LLONG_MAX || min2 == LLONG_MAX) {
            cout << max1 * max2 << endl;
        } else if (max2 == LLONG_MIN || max1 == LLONG_MIN) {
            cout << min1 * min2 << endl;
        } else {
            cout << max(max1 * max2, min1 * min2) << endl;
        }
    }
    return 0;
}

