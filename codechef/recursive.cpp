#include <bits/stdc++.h>
using namespace std;

#define ll long long

map<ll, ll> memo;

long long f(ll N) {
    if (N == 0)
        return 1;

    if(memo.find(N) != memo.end())
        return memo[N];

    ll result = f(N / 2) + f(N / 3);
    memo[N] = result;

    return result;
}

int main() {
    ll N;
    cin >> N;

    ll result = f(N);
    cout << result << "\n";

    return 0;
}

