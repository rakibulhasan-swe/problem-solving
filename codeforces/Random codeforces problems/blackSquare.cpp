//https://codeforces.com/problemset/problem/431/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, sum = 0;
    char pa = '1', pb = '2', pc = '3';
    cin >> a >> b >> c >> d;
    string s;
    cin >> s;

    for(int i=0; i<s.length(); i++){
        if(s[i]==pa)
            sum+=a;
        else if(s[i]==pb)
            sum+=b;
        else if(s[i]==pc)
            sum+=c;
        else
            sum+=d;
    }
    cout << sum << "\n";

    return 0;
}
