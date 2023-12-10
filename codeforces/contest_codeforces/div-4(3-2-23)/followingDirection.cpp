#include<bits/stdc++.h>
using namespace std;

int solve()
{
    long long n, i1 = 0, i2 = 0;
        string s;
        cin >> n >> s;

        for(int i=0; i<n; i++){
            if(s[i] == 'U')
                i2++;
            if(s[i] == 'D')
                i2--;
            if(s[i] == 'R')
                i1++;
            if(s[i] == 'L')
                i1--;
            if(i1==1 && i2==1)
                return 1;
        }

        return 0;
}

int main()
{
    int t;
    cin >> t;

    while(t--){
        int result = solve();
        if(result)
            cout << "YES\n";
        else
            cout << "NO\n";
    }


    return 0;
}
