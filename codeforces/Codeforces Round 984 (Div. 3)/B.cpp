#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t; 
    cin >> t;

    while (t--) {
        int n, k; 
        cin >> n >> k;
        unordered_map<int, vector<int>> brandCosts;

        for (int i=0; i<k; ++i) {
            int b, c; 
            cin >> b >> c;
            brandCosts[b].push_back(c);
        }

        vector<int> maxEarnings;

        for (auto& [brand, costs] : brandCosts) {
            sort(costs.rbegin(), costs.rend());
            
            int total = accumulate(costs.begin(), costs.end(), 0);
            maxEarnings.push_back(total);
        }
        sort(maxEarnings.rbegin(), maxEarnings.rend());

        int sum = 0;
        for (int i = 0; i < min(n, (int)maxEarnings.size()); ++i) {
            sum += maxEarnings[i];
        }

        cout << sum << "\n";
    }

    return 0;
}
