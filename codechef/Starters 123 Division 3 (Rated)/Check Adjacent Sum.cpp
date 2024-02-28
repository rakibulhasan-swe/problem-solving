#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int tc;
	cin >> tc;
	
	while(tc--){
	    int n, q, sum = 0;
	    cin >> n >> q;
	    
	    vector<int> v(n);
	    for(auto &x:v) {
	       cin >> x;
	       sum+=x;
	    }
	    
	    while(q--){
	        ll x;
	        cin >> x;
	        
	        bool found = false;
	        
	        for(int i=0; i<n; i++){
	            for(int j=i+1; j<n; j++){
	                ll tmp = sum-v[i]-v[j];
	                tmp = tmp*2;
	                tmp = tmp+v[i]+v[j];
	                if(tmp == x){
	                    cout << v[i] << " ";
	                    for(int k=0; k<n; k++){
	                        if(k!=i && k!=j){
	                            cout << v[k] << " ";
	                        }
	                    }
	                    cout << v[j] << "\n";
	                    found = true;
	                    break;
	                }
	            }
	            if(found == true) break;
	        }
	        if(!found) cout << "-1\n";
	    }
	}

}
