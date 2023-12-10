#include <iostream>
#include <cmath>
using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll ans = 0;
        ans = (n*n)+(n*2+2);
        cout << ans << "\n";
    }
    return 0;
}
