#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;

        if(x==y) cout << x*2 << "\n";
        else{
            for(int i=0; i<k; i++){
                int gcd_val = gcd(x, y);
                if(x>y) x = gcd_val;
                else y = gcd_val;

                if(x==y){
                    cout << x+y << "\n";
                    break;
                }
                int lcm_val = lcm(x, y);
                if(x>y) x = lcm_val;
                else y = lcm_val;

                if(x==y){
                    cout << x+y << "\n";
                    break;
                }
            }
        }


    }

    return 0;
}

