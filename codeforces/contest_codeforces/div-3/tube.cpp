#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n, t;
        cin >> n >> t;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int max_entertainment = -1;
        int index_of_max_entertainment = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] <= t) {
                if (b[i] > max_entertainment) {
                    max_entertainment = b[i];
                    index_of_max_entertainment = i + 1;
                    t-=1;
                }else{
                    t-=1;
                }
            }else{
                t-=1;
            }
        }
        cout << index_of_max_entertainment << endl;
    }
    return 0;
}
