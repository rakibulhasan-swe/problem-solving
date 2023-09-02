//https://codeforces.com/problemset/problem/703/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, m = 0, c = 0;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;

        if(a>b)
            m++;
        else if(b>a)
            c++;
    }

    if(m>c)
        cout << "Mishka\n";
    else if(c>m)
        cout << "Chris\n";
    else
        cout << "Friendship is magic!^^\n";

    return 0;
}
