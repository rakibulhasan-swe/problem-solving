//https://codeforces.com/problemset/problem/118/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, result;
    cin >> s;

    for(int i=0; i<s.length(); i++){
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'){
            continue;
        }
        result+='.';
        result+=tolower(s[i]);
    }

    cout << result << endl;


    return 0;
}
