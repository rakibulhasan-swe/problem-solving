// https://codeforces.com/problemset/problem/1800/A
#include<bits/stdc++.h>
using namespace std;

bool checkAllCharsPresent(const std::string& str) {
    bool foundM = false;
    bool foundE = false;
    bool foundO = false;
    bool foundW = false;

    for (char c : str) {
        if (c == 'm' || c == 'M') {
            foundM = true;
        } else if (c == 'e' || c == 'E') {
            foundE = true;
        } else if (c == 'o' || c == 'O') {
            foundO = true;
        } else if (c == 'w' || c == 'W') {
            foundW = true;
        }
    }

    return foundM && foundE && foundO && foundW;
}

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        if(n<4){
            cout << "NO\n";
        }else{
            bool possible = true;
            if(checkAllCharsPresent(s))
        }

    }

    return 0;
}

