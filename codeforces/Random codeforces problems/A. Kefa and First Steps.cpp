#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin >> n) {
        int ai, prev, start = 0, maxLen = 0;

        cin >> prev;

        for(int i = 1; i < n; ++i) {
            cin >> ai;

            if(prev > ai) {
                maxLen = max(maxLen, i - start);
                start = i;
            }

            prev = ai;
        }

        maxLen = max(maxLen, n-start);

        cout << maxLen << "\n";
    }

    return 0;
}