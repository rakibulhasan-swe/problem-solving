//https://codeforces.com/problemset/problem/96/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int condition = 1;
    for(int i=1; i<=s.length(); i++){
        if(s[i] == s[i-1]){
            condition++;
            if(condition==7){
                cout<<"YES"<<endl;
                return 0;
            }
        }else{
            condition=1;
        }

    }
    cout<<"NO"<<endl;

    return 0;
}
