#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin >> n) {
        int ans;

        if(n <= 9) {
            ans = n;
        }
        else if(n <= 189) { 
            int tmp = n - 9;
            int num = 9 + tmp/2 + ((tmp & 1)? 1 : 0);
            ans = (tmp & 1)? (num / 10) : (num % 10);
        }
        else {
            int tmp = n - 189;
            int num = 99 + tmp/3 + ((tmp % 3)? 1 : 0);

            if(tmp % 3 == 1)
                ans = num / 100;
            else if(tmp % 3 == 2)
                ans = (num % 100) / 10;
            else                
                ans = num % 10;
        }

        cout << ans << "\n";
    }

    return 0;
}