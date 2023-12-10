#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, d;
        cin >> n >> d;

        string s;
        cin >> s;

        int i = 0;
        while (i < n && s[i] >= d + '0') {
            i++;
        }

        if (i < n) {
            s.insert(i, to_string(d));
        }
        else {
            s.push_back(d + '0');
        }

        cout << s << "\n";
    }

    return 0;
}
