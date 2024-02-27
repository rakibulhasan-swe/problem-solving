#include<bits/stdc++.h>
using namespace std;

int array_sum(vector<int> v, int n) {
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum+= abs(v[i]);
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin >> tc;

    while(tc--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
        }

        if(array_sum(v, n)%3 == 0) cout << "0\n";
        else if(array_sum(v, n)<3) cout << "1\n";
        else {
            if(array_sum(v, n)%3 == 1 && n==1) {
                cout << "1\n";
            }else if (array_sum(v, n)%3 == 1){
                int moves  =0;
                for (int i = 0; i < n; ++i) {
                    if (v[i] % 3 == 1) {
                        ++moves;
                        break;
                    }
                }
                if (moves == 0) {
                    if (n >= 2) moves = 2;
                    else moves = -1;
                }
                cout << moves << "\n";
            }else if (array_sum(v, n)%3 == 2){
                cout << "1\n";
            }
        }
        
    }

    return 0;
}