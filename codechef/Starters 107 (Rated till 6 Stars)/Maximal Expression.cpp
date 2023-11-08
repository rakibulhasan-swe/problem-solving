#include <iostream>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

	ll t;
	cin >> t;

	while(t--){
	    ll n, k;
	    cin >> n >> k;

	    ll max_value = -1;
	    ll max_res = -1;

	    for(ll i=0; i<=n; i++){
	        ll v = (i%k)*((n-i)%k);
	        if(v > max_value){
	            max_value = v;
	            max_res = i;
	        }
	    }
	    cout << max_res << "\n";
	}
	return 0;
}
