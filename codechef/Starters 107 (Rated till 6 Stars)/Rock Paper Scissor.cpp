#include <iostream>
using namespace std;

int main() {
	long long t;
	cin >> t;

	while(t--){
	    long long n;
	    cin >> n;
	    string c, o;
	    cin >> c >> o;


	    int c_won = 0, o_won = 0;
	    for(int i=0; i<n; i++){
	       if(c[i] == o[i]) continue;
	       else if((c[i]=='R' && o[i]=='S') || (c[i]=='S' && o[i]=='P') || (c[i]=='P' && o[i]=='R')) c_won++;
	       else o_won++;
	    }
	    int p = 0;
	    if(o_won >= c_won){
	        p = (c_won+o_won)/2;
	        p++;
	        cout << p-c_won << "\n";
	    }
	    else cout << 0 << "\n";
	}
	return 0;
}
