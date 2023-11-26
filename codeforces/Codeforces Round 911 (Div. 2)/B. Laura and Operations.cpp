#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        cout << (abs(b-c) % 2 == 0 ? 1 : 0) << " ";
        cout << (abs(a-c) % 2 == 0 ? 1 : 0) << " ";
        cout << (abs(a-b) % 2 == 0 ? 1 : 0) << "\n";

    }

    return 0;
}
