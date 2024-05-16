#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int x, y;
	    cin >> x >> y;
	    
	    if(x>1000){
	        int m = x+x;
	        if(y==1) cout << m << "\n";
	        else{
	            for(int i=2; i<=y; i++){
	            m += m;
	        }
	        cout << m << "\n";
	        }
	    }else{
	        int m = x+1000;
	        if(y==1) cout << m << "\n";
	        else{
	            for(int i=2; i<=y; i++){
	            m += m;
	        }
	        cout << m << "\n";
	        }
	    }
	}

}
