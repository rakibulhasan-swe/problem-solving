#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int x, n;
	    cin >> x >> n;
	    int pass = x*100;
	    
	    if(n<=pass) cout << "0\n";
	    else {
	        float left = n-pass;
	        float r = ceil(left/100);
	        cout << r << "\n";
	    }
	}
	return 0;
}