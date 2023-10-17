#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        bool position = false;
        for(int i=0; i<=6; i++){
            if(x.find(s) != -1){
                position = true;
                cout << i << "\n";
                break;
            }
            x+=x;
        }
        if(!position) cout << "-1\n";
    }

    return 0;
}
