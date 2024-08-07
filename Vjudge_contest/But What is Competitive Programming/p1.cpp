#include <bits/stdc++.h>
using namespace std;

int countSuperSubarrays(const vector<int>& a) {
    int n = a.size();
    int superSubarrayCount = 0;

    vector<long long> prefixSum(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefixSum[i + 1] = prefixSum[i] + a[i];
    }
    
    for (int start = 0; start < n; ++start) {
        for (int end = start; end < n; ++end) {
            long long sum = prefixSum[end + 1] - prefixSum[start];
            bool isSuper = true;
            for (int k = start; k <= end; ++k) {
                if (sum % a[k] != 0) {
                    isSuper = false;
                    break;
                }
            }
            if (isSuper) {
                ++superSubarrayCount;
            }
        }
    }

    return superSubarrayCount;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int result = countSuperSubarrays(a);
        cout << result << "\n";
    }

    return 0;
}
