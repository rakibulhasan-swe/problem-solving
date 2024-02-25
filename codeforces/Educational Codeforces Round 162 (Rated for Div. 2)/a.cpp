#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minOperations(vector<int>& cells) {
    int n = cells.size();
    int operations = 0;
    int lastChipIndex = -1;

    for (int i = 0; i < n; ++i) {
        if (cells[i] == 1) {
            if (lastChipIndex != -1) {
                operations += i - lastChipIndex - 1;
            }
            lastChipIndex = i;
        }
    }

    return operations;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        vector<int> cells(n);
        for (int i=0; i<n; ++i) cin >> cells[i];

        cout << minOperations(cells) << "\n";
    }

    return 0;
}
