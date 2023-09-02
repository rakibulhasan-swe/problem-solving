//https://codeforces.com/problemset/problem/1607/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        ll a[26];
        ll sum = 0;
        for(int i=0; i<s.length(); i++)
            a[s[i]-'a'] = i;
        string s1;
        cin >> s1;
        for(int i=1; i<s1.length(); i++){
            sum+= abs(a[s1[i]-'a'] - a[s1[i-1]-'a']);
        }
        cout << sum << "\n";
    }


    return 0;
}
