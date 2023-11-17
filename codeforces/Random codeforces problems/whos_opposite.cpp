// https://codeforces.com/problemset/problem/1560/B
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int a, b, c;
        cin >> a >> b>> c;

        int diff = abs(a-b);
        int total = diff*2;

        if(total<a || total<b || total<c)
            cout << "-1\n";
        else{
            int d = c + diff;
            if(d>total)
                d = c - diff;
            cout<< d <<"\n";

        }

    }

    return 0;
}

