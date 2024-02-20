#include <bits/stdc++.h>
using namespace std;

#define ll long long

int sumOfDigits(int num) {
    ll sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    vector<int> v(2e5+1);
    for (int i = 1; i <= 2e5; ++i) {
        v[i] = v[i-1] + sumOfDigits(i);
    }

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        cout << v[n] << "\n";
    }

    return 0;
}
