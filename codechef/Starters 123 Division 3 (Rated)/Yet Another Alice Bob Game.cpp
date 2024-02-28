#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int tc;
	cin >> tc;
	
	while(tc--){
	    ll n, a, b;
	    cin >> n >> a >> b;
	    
	   if(a==b) {
	       if(n>a){
	           if((n-(a+1))%(a+1) == 0) cout << "Bob\n";
	           else cout << "Alice\n";
	       }else {
	           cout << "Alice\n";
	       }
	   }else if(a<b){
	       if(n<=a) cout << "Alice\n";
	       else cout << "Bob\n";
	   }else {
	       cout << "Alice\n";
	   }
	}

}
