#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int coins = 0;
        int n = s.length();

        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == 'A' && s[i + 1] == 'B') {
                s[i] = 'B';
                s[i + 1] = 'C';
                coins++;
                i-=2;
            } else if (s[i] == 'B' && s[i + 1] == 'A') {
                s[i] = 'C';
                s[i + 1] = 'B';
                coins++;
                i-=2;
            }
        }

        cout << coins << "\n";
    }

    return 0;
}
