#include <iostream>
#include <vector>

using namespace std;

string check_equal(vector<int> v) {
    if (v[0] != v[v.size() - 1]) {
        return "NO\n";
    } else {
        int first_elem = v[0];
        for (int i = 1; i < v.size() - 1; ++i) {
            if (v[i] < first_elem) {
                return "NO\n";
            }
        }
        return "YES\n";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for (auto &x : v) cin >> x;

        string res = check_equal(v);

        cout << res;
    }

    return 0;
}
