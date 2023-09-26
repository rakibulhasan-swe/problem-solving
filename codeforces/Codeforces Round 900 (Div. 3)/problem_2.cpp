#include <iostream>
using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        ll x = 2, y = 3, z, i = 2;

        cout << x << " " << y << " ";
        while(i<n){
            z = y+1;
            while((3*z)%(x+y) == 0) z++;
            x = y;
            y = z;
            cout << y << " ";
            i++;
        }

        cout << "\n";
    }

    return 0;
}
