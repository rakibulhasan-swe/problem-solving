#include <bits/stdc++.h>

using namespace std;

int minMovesToOpenLock(string S, string K, int n, int m) {
    bool flag = false;
    int moves = 0;
    int track1 = 0;
    int track2 = 0;
    int track3 = 0;

     size_t found = S.find(K);
     if(found != std::string::npos){
        return 0;
    }

    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            if(S[track3]>=K[j]){
                sort(S.begin(), S.end());
                int diff = abs(S[track1++]-K[j]);
                moves += diff;
            }else{
                sort(S.rbegin(), S.rend());
                int diff = abs(S[track2++]-K[j]);
                moves += diff;
            }

            if(j==(m-1)){
                flag = true;
                break;
            }
        }
        if(flag)
            break;
    }

    return moves;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;
        string S, K;
        cin >> S >> K;

        int result = minMovesToOpenLock(S, K, N, M);
        cout << result << endl;
    }

    return 0;
}
