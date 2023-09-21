#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        char grid[10][10];
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                cin >> grid[i][j];
            }
        }

        int total = 0;

        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                if (grid[i][j] == 'X') {
                    int distance = min({i, j, 9-i, 9-j});
                    if(distance == 0)
                        total+=1;
                    else if(distance == 1)
                        total+=2;
                    else if(distance == 2)
                        total+=3;
                    else if(distance == 3)
                        total+=4;
                    else if(distance == 4)
                        total+=5;
                }
            }
        }

        cout << total << endl;
    }

    return 0;
}
