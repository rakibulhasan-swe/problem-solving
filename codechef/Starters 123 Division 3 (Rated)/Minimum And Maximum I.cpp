#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    
	    long long p = n/2;
	    long long ans = p*(p+1);
	    
	    if(n%2 == 1) ans+=(n/2)+1;
	    
	    cout << ans << "\n";
	}

}
