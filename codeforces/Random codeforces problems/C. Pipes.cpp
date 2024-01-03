#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 3;

enum pipe {StraightPipe, AnglePipe};
pipe grid[2][MAXN];


int main()
{
    int q;
    cin >> q;

    while(q--) {
        int n;
        cin >> n;

        for(int row = 0; row < 2; ++row) {
            char inpStr[MAXN];
            cin >> inpStr;

            for(int i = 0; i < n; ++i) {
                if(inpStr[i] - '0' <= 2) {
                    grid[row][i] = StraightPipe;
                } else {
                    grid[row][i] = AnglePipe;
                }
            }
        }

        bool prev[2] = {true, false};
        bool curr[2] = {false, false};

        for(int col = 0; col < n; ++col) {
            for(int row = 0; row <= 1; ++row) {
                curr[row] = ((prev[row] and grid[row][col] == StraightPipe)
                            or (prev[!row] and grid[!row][col] == AnglePipe and grid[row][col] == AnglePipe));
            }
            prev[0] = curr[0], prev[1] = curr[1];
        }

        printf("%s\n", (curr[1] ? "YES" : "NO"));
    }

    return 0;
}