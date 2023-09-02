//https://www.codechef.com/problems/EZSPEAK
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, cnt = 0;
	    cin >> n;
	    char s[n];
	    for(int i=0; i<n; i++)
	        cin >> s[i];
	    for(int i=0; i<n; i++){
	        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
	            cnt++;
	        }else{
	            if(cnt>=4)
	                break;
	            else
	                cnt = 0;
	        }
	    }
	    if(cnt<4)
	        cout << "YES\n";
	    else
	        cout << "NO\n";
	}
	return 0;
}


