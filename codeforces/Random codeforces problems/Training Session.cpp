#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> topics, difficulties, topicCounter(n+1, 0), difficultyCounter(n+1, 0);

        for(int i = 0; i < n; ++i) {
            int a, b;
            scanf("%d %d", &a, &b);

            topics.push_back(a);
            ++topicCounter[a];

            difficulties.push_back(b);
            ++difficultyCounter[b];
        }

        long long ans = ((long long) n) * (n - 1) * (n - 2) / 6;      // nC3

        for(int i = 0; i < n; ++i) {
            ans -= ((long long) (topicCounter[topics[i]] - 1)) * (difficultyCounter[difficulties[i]] - 1);
        }

        cout << ans << "\n";
    }

    return 0;
}