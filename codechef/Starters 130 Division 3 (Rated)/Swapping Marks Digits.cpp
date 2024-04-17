#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    string a, b;
	    cin >> a >> b;
	    
	    string c = a, d = b;
	    
	    reverse(c.begin(), c.end());
	    reverse(d.begin(), d.end());
	    
	    
	    if(a>b || c>b || a>d || c>d) cout << "YES\n";
	    else cout << "NO\n";
	}
    return 0;
}
