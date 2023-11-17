//https://codeforces.com/problemset/problem/731/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int sum = 0;
    char start = 'a';
    cin >> s;

    for(int i=0; i<s.length(); i++){
        int s1 = abs(s[i]-start);
        int s2 = 26 - abs(s1);
        sum += min(s1, s2);
        start = s[i];
    }
    cout << sum << "\n";

    return 0;
}
