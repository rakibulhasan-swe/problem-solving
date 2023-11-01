#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool is_prime(ll n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

string winner(ll n) {
    if(n%2 == 0) return "Bob";

    if(is_prime(n)) return "Alice";

    for(ll i=3; i<=n+1; i+=2){
        if(n%i==0 && is_prime(i)) return "Alice";
    }
    return "Bob";
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;

        string res = winner(n);
        cout << res << "\n";
    }

    return 0;
}
