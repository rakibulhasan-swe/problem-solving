#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans = 0;
        int flip = 0;
        char prev = s[0];

        for (int i = 1; i < n; ++i) {
            char c = s[i];
            if (flip == 1) {
                if (c == '1')
                    c = '0';
                else
                    c = '1';
            }
            if (c == prev) {
                ans++;
                if (flip == 0)
                    flip = 1;
                else
                    flip = 0;
                if (c == '1')
                    prev = '0';
                else
                    prev = '1';
            } else {
                prev = c;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}
