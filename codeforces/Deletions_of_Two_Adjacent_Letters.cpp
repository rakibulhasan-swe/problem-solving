// https://codeforces.com/problemset/problem/1650/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        char c;
        cin >> c;
        bool flag = false;

        for(int i=0; i<s.size(); i++){
            if(s[i] == c){
                int left = i-0, right = s.size()-1-i;
                if(left%2==0 && right%2==0){
                    flag = true;
                    break;
                }
            }
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
