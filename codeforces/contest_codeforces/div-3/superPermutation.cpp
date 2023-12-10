#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << 1 << endl;
        } else if (n == 2) {
            cout << "2 1" << endl;
        } else if (n == 3) {
            cout << "-1" << endl;
        } else {
            vector<int> super_permutation;
            super_permutation.push_back(1);
            super_permutation.push_back(2);
            super_permutation.push_back(3);

            for (int i = 4; i <= n; i++) {
                unordered_set<int> used_numbers;

                // Add all the previous elements to the set of used numbers
                for (int j = 0; j < super_permutation.size(); j++) {
                    used_numbers.insert(super_permutation[j]);
                }

                // Add the new elements to the super permutation
                for (int j = 1; j <= i; j++) {
                    int next_number = (super_permutation.back() + j) % i + 1;
                    if (used_numbers.find(next_number) == used_numbers.end()) {
                        super_permutation.push_back(next_number);
                        used_numbers.insert(next_number);
                    }
                }
            }

            // Check if the resulting array is a permutation of size n
            unordered_set<int> seen_numbers;
            bool is_permutation = true;
            for (int i = 0; i < n; i++) {
                if (seen_numbers.find(super_permutation[i]) != seen_numbers.end()) {
                    is_permutation = false;
                    break;
                } else {
                    seen_numbers.insert(super_permutation[i]);
                }
            }

            if (is_permutation) {
                for (int i = 0; i < n; i++) {
                    cout << super_permutation[i] << " ";
                }
                cout << endl;
            } else {
                cout << "-1" << endl;
            }
        }
    }

    return 0;
}
