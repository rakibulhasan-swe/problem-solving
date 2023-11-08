#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--){
	    int n;
	    cin >> n;

	    int i=1, j=n;
	    while(i<j){
	        cout << i << " " << j << " ";
	        i++;
	        j--;
	    }
	    if(n&1) cout << n/2+1;

	    cout << "\n";
	}
	return 0;
}
