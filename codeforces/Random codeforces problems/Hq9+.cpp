//https://codeforces.com/problemset/problem/133/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int flag = 0;
    cin >> s;

    for(int i=0; i<s.length(); i++){
        if(s[i]>=33 && s[i]<=126){
            if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
                flag=1;
        }
    }

    if(flag)
        cout << "YES\n";
    else
        cout << "NO\n";



    return 0;
}
