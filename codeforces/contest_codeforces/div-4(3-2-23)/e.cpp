#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--){
        long long n, cnt = 0;
        cin >> n;

        vector<long long>a(n), b(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
            if(a[i]<0){
                cnt++;
            }
        }

        for(int i=0; i<n; i++){
            b[i] = abs(a[i]);
        }

        long long sum = 0;
        for (int i=0; i<n; i++) {
            sum+=b[i];
        }

        if(cnt%2 == 0){
            cout << sum << endl;
        }else{
            cout << sum -  << "\n";
        }

        cout << sum << endl;
    }
    return 0;
}
