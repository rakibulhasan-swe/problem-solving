#include <bits/stdc++.h>
using namespace std;

#define ll long long

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        ll sum = 0;
        for (int i = 1; i <= n; ++i) {
            if (i < 10) {
                sum += i;
            } else {
                sum += sumOfDigits(i);
            }
        }
        cout << sum << "\n";
    }

    return 0;
}
