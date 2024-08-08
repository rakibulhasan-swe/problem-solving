#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int s1 = 0, s2 = 0;

        if((a1>b1 && a2>=b2) || (a1>=b1 && a2>b2)) s1+=2;
        if((a2>b1 && a1>=b2) || (a2>=b1 && a1>b2)) s1+=2;

        cout << s1 << "\n";
    }

    return 0;
}