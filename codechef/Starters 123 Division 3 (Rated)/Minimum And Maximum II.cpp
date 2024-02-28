#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    
	    long long ans = n*(n+1) / 2 + (n-1);
        
	    cout << ans << "\n";
	}

}
