#include <iostream>
#include <vector>

using namespace std;

bool canEqualizeCandies(vector<int>& candies) {
    int n = candies.size();
    int c = 0;

    for (int i = 0; i < n; i++) {
        c += candies[i];
    }

    if (c % n != 0) {
        return false;
    }

    int d = c / n;

    for (int i = 0; i < n; i++) {
        int diff = candies[i] - d;

        if (diff % 2 != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> candies(N);

        for (int i = 0; i < N; i++) {
            cin >> candies[i];
        }

        if (canEqualizeCandies(candies)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
