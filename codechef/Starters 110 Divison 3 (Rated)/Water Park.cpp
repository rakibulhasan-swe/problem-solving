#include <iostream>
using namespace std;

int main() {
	int w, h;
	cin >> w >> h;
	
	int cw=60, ch=130;
	
	if(cw<=w && ch>=h) cout << "YES\n";
	else cout << "NO\n";
	
	return 0;
}