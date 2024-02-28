#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	
	while(tc--){
	    int n;
	    cin >> n;
	    
	    vector<int> v(n);
	    for(auto &x:v) cin >> x;
	    
	    sort(v.begin(), v.end());
	    
	    int sum = v[0]+v[1];
	    for(int i=2; i<n; i++){
	        sum+= (v[i]+v[i]);
	    }
	    cout << sum << "\n";
	}

}
