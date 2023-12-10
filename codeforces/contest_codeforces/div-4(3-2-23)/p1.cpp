#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    string codeforces = "codeforces";
    char c;
    for (int i = 0; i < t; i++) {
        cin >> c;
        if (codeforces.find(c) != string::npos) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
