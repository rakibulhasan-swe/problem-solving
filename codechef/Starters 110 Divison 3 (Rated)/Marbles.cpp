#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;
    
    while(t--){
        ll a, b;
        cin >> a >> b;
    
        int remainder = a % b;
        
        if (remainder == 0) {
            cout << "0\n";
        } else {
            ll count = 0;
            ll count2 = 0;

            ll c = a;
            ll d = b;
            ll got1 = 0;

            while (a >= b) {
                a--;
                b++;

                count++;
                if (a % b == 0) {
                    got1 = 1;
                    break;
                }
            }

            a = c;
            b = d;
            ll got2 = 0;

            while (b > 0) {
                a++;
                b--;

                count2++;
                if (a % b == 0) {
                    got2 = 1;
                    break;
                }
            }

            if (got2 == 1 && got1 == 1) {
                if (count2 < count) {
                    cout << count2 << "\n";
                } else {
                    cout << count << "\n";
                }
            } else {
                if (got1 == 1) {
                    cout << count << "\n";
                } else {
                    cout << count2 << "\n";
                }
            }
        }
    }
    
    return 0;
}