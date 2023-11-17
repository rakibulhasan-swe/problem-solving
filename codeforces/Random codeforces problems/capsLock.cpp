//https://codeforces.com/problemset/problem/131/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    bool c = true;
    char ch;
    cin >> s;

    for(int i=1; i<s.length(); i++){
        if(islower(s[i])){
            c = false;
        }
    }

    if(c){
        for(int i=0; i<s.length(); i++){
            if(islower(s[i]))
                ch = toupper(s[i]);
            else
                ch = tolower(s[i]);

            cout << ch;
        }
    }
    else
        cout << s;


    cout << "\n";

    return 0;
}
