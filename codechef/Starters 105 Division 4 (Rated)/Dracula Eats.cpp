#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;

	while(t--){
	    int n;
	    cin >> n;

	    if(n == 1)
	        cout << 0 << "\n";
	    else{
	        int n1 = n-2;
	        int res = n1/7;
	        cout << res+1 << "\n";
	    }
	}
	return 0;
}
