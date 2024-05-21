#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int x, y;
        cin >> x >> y;

        int r = (y+1)/2;
        x -= (r*5*3-y*2*2);
        x = max(x, 0);
        r+= (x+5*3-1)/(5*3);

        cout << r << "\n";
    }

    return 0;
}