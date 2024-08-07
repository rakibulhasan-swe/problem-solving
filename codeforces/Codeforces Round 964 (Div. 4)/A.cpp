#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
       string s;
       cin >> s;
       
       cout << int(s[0] - '0')+int(s[1] - '0') << "\n";
    }

    return 0;
}