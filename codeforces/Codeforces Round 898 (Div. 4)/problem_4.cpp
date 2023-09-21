#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, ans = 0;
        cin >> n >> k;
        string s;
        cin >> s;

        for(int i=0; i<n; ++i) {
            if(s[i] == 'B'){
                ans++;
                i+=k-1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

