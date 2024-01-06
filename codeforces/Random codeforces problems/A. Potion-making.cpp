#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;

        int g = gcd(k, 100 - k);

        printf("%d\n", k / g + (100 - k) / g);
    }

    return 0;
}