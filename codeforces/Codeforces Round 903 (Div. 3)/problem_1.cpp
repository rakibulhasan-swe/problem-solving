#include <bits/stdc++.h>
using namespace std;

int minOperationsToSubstring(string x, string s) {
    int n = x.length();
    int m = s.length();
    int count = 0;
    string temp = x;
    bool flag = true;

    while(m--){
        if (temp.find(s) != string::npos) {
            flag = false;
            break;
        }else{
           count++;
           temp = temp+temp;
        }
    }

    if(!flag) return count;

    return -1;
}

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

        int result = minOperationsToSubstring(x, s);
        cout << result << "\n";
    }

    return 0;
}
