#include <bits/stdc++.h>
using namespace std;

#define ll long long

int value(ll i){
    if(i==0) return 0;
    return (i%9==0) ? 9 : (i%9);
}

int main() {
    int t;
    cin >> t;
    
    while(t--){
        ll n;
        cin >> n;
        
        ll sum = 0;
        ll group = n/9;
        sum += group*45;
        
        ll rem = n%9;
        
        for(ll i=1; i<=rem; i++){
            sum += value(i); 
        }
        cout << sum << "\n";
    }
}
