//https://codeforces.com/problemset/problem/1790/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, s1 = "314159265358979323846264338327";
    int t;
    cin >> t;

    while(t--){
        int count = 0;
        cin >> s;
        for(int i=0; i<s.size(); i++){
            if(s1[i] == s[i])
                count++;
            else
                break;
            }
        cout << count << "\n";
    }

    return 0;
}
