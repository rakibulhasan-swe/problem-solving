//https://codeforces.com/problemset/problem/520/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, flag = 1;
    cin >> n;
    string s;
    cin >> s;
    vector<int>arr(150);

    if(n < 26){
        cout << "NO\n";
        return 0;
    }
    else{
        for(int i=0; i<n; i++){
            char ch = tolower(s[i]);
            if(ch >= 'a' && ch <= 'z'){
                int aschiiValue = (int)ch;
                arr[aschiiValue] = 1;
            }
        }
    }

    for(int i=97; i<=122; i++){
        if(arr[i]!=1){
            cout << "No\n";
            flag = 0;
            break;
        }
    }

    if(flag)
        cout << "YES\n";

    return 0;
}
