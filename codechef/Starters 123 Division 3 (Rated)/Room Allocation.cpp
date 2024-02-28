#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin >> tc;
	
	while(tc--){
	    int n;
	    cin >> n;
	    
	    vector<double> v(n);
	    for(auto &x:v) cin >> x;
	    
	    int ans = 0;
	    for(auto x:v){
	        ans+= ceil((x/2));
	    }
	    cout << ans << endl;
	}
}
