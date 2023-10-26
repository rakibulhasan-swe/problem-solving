#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        string pin;
        cin >> pin;

        int cursor = 1;
        int val = 0;
        int res = 0;

        for(int i=0; i<pin.size(); i++){
            val = pin[i]-'0';
            if(val==0) val=10;

            int diff = abs(cursor - val);

            if(diff == 0) res+=1;
            else {
                res += diff+1;
                cursor = val;
            }
        }
        cout << res << "\n";
    }



    return 0;
}
