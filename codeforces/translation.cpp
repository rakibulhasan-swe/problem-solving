//https://codeforces.com/problemset/problem/41/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, s1, s2;
    cin >> s >> s1;

    for(int i=s.length()-1; i>=0; i--)
    {
        s2+=s[i];
    }

    if(s1 == s2){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }


    return 0;
}
