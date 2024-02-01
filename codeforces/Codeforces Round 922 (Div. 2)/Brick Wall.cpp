#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;
        cout << n*(m/2) << "\n";
    }

    return 0;
}