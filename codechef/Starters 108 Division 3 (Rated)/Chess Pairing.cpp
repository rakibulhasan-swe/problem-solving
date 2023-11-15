#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;

	while(t--){
	    int n, x;
	    cin >> n >> x;

	    int unrated = (2*n)-x;
	    if((x-unrated)>0) cout <<  (x-unrated) << "\n";
	    else cout << 0 << "\n";

	   // int v = 2*n;
	   // int unrated = v-x;
	   // int rated = x-unrated;

	   // if(x == 0) cout << "0\n";
	   // else cout << rated << "\n";


	}
	return 0;
}

