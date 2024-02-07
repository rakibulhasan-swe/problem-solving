#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        cout << n << " ";

        for(int i=1; i<n; i++)
            cout << i << " ";
            
        cout << "\n";
    }
    

    return 0;
}