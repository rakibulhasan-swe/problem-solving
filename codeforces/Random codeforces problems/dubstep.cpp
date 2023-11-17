//https://codeforces.com/problemset/problem/208/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    for(int i=0; i<s.length(); i++){
        if(s[i]=='W' && s[i+1] == 'U' && s[i+2] == 'B' && i<s.length()){
            if(i == 0){
                i+=2;
                continue;
            }else{
                i+=2;
                cout << " ";
                continue;
            }
        }else{
            cout << s[i];
        }
    }



    return 0;
}
