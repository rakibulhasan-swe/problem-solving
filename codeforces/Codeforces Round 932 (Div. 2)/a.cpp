#include<bits/stdc++.h>
using namespace std;

bool isPrefix(string s) {
    int n = s.length();
    bool res = 0;
    for (int i=0; i<n/2; i++) {
        if (s[i] == s[n-i-1]) continue;

        if(s[i]>s[n-i-1]) res = 1;
        else {
            break;
        }
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        int n;
        string s;
        cin >> n >> s;

        bool ans = isPrefix(s);

        if(!ans) cout << s << "\n";
        else {
            string s1 = s;
            reverse(s.begin(), s.end());
            cout << s+s1 << "\n";
        }
    }

    return 0;
}