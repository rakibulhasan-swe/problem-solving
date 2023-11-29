#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPrime(int mh){
    if(mh <= 1) return false;
    for(int i=2; i<=sqrt(mh); i++) {
        if(mh%i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int mh;
        cin >> mh; // monster health = mh
        
        int total_moves = 0;
        int attack_power = 1;
        
        while(mh > 0){
            if(isPrime(mh)){
                mh = 0;
                total_moves++;
                break;
            }else{
                mh -= attack_power;
                attack_power*=2;
                total_moves++;
            }
        }
        if(mh != 0) cout << "-1\n";
        else cout << total_moves << "\n";
    }

    return 0;
}
