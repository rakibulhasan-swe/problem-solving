#include<bits/stdc++.h>
using namespace std;

int solve(int n, string s) {
    int c = 0;
    for (int i=0; i<n/2; i++){
        if ((s[i] == '1' && s[n - i - 1] == '0') ||  (s[i] == '0' && s[n - i - 1] == '1')){
            c++;
            continue;
        }else{
            break;
        }
    }
    return s.length() - c*2;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << solve(n, s) << "\n";
    }
    return 0;
}
