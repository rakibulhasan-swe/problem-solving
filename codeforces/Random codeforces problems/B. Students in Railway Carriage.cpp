#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 3;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n, a, b;
    char str[MAXN];

    cin >> n >> a >> b >> str;

    int aa = 0, bb = 0, i = 0;

    while(i < n) {
        int consecutive_empty_seats = 0;

        while(str[i] != '*' and i < n) {
            ++consecutive_empty_seats;
            ++i;
        }

        ++i;

        int x1 = consecutive_empty_seats / 2;
        int x2 = consecutive_empty_seats - x1;

        if(a - aa <= b - bb) {
            aa += min(a - aa, x1);
            bb += min(b - bb, x2);
        }
        else {
            aa += min(a - aa, x2);
            bb += min(b - bb, x1);
        }
    }

    cout << aa+bb << "\n";

    return 0;
}