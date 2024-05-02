#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> x(n-1);
        for (int i=0; i <n-1; ++i)
            cin >> x[i];

        vector<int> a(n);
        a[0] = 1;

        for (int i=1; i < n; ++i) {
            a[i] = a[i-1]+x[i-1];
        }

        for (int i = 0; i <a.size(); ++i) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
