//https://codeforces.com/problemset/problem/32/B
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    for(int i=0; i<s.length(); i++){
        if(s[i] == '-' && s[i+1] == '.'){
            cout << 1;
            i++;
        }
        else if(s[i] == '-' && s[i+1] == '-'){
            cout << 2;
            i++;
        }
        else if(s[i] == '.'){
            cout << 0;
        }
    }

    cout << "\n";

    return 0;
}
