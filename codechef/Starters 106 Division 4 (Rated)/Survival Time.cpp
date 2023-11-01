#include <iostream>
using namespace std;

int main() {

	int tc;
	cin >> tc;

	while(tc--){
	    int n, x, d;
	    cin >> n >> x >> d;

	    cout << d+(n/(x*5)) << "\n";
	}
	return 0;
}
