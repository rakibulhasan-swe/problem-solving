#include <iostream>
#include <vector>
using namespace std;

int minOperationsToMakePerfectSquare(int n, vector<string> matrix) {


    return operations;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> matrix(n);
        for (int i = 0; i < n; i++) {
            cin >> matrix[i];
        }

        int result = minOperationsToMakePerfectSquare(n, matrix);
        cout << result << endl;
    }

    return 0;
}
