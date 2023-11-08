#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--){
	    int x, y, z;
	    cin >> x >> y >> z;

	    int v = x*y;
	    int m = z* (24*60);

	    if(m >= v) cout << "YES\n";
	    else cout << "NO\n";
	}
	return 0;
}

