#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;
    
    while(t--){
        ll n, k, x;
        cin >> n >> x >> k;
        ll g = n-x;
        
        ll boy = x%k;
        ll girl = g%k;
        
        ll res = abs(boy-girl);
        cout << res << "\n";
    }
	
	return 0;
}