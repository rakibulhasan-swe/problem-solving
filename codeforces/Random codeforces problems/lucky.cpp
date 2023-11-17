//https://codeforces.com/problemset/problem/1676/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        int sum1 = 0, sum2 = 0;
        cin >> s;
        for(int i=0; i<6; i++){
            if(i<3)
                sum1+=s[i];
            else
                sum2+=s[i];
        }
        if(sum1==sum2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }


    return 0;
}
