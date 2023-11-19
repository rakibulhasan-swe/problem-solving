#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, k, countA = 0, countB = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='A') countA++;
            else countB++;
        }

        if(countB == k) cout << "0\n";
        else{
            if(countB<k){
                int cnt = 0;
                for(int i=0; i<s.size(); i++){
                    if(s[i] == 'A') cnt++;
                    if(cnt == k - countB){
                        cout << 1 << "\n" << i+1 << " " << "B\n";
                        break;
                    }
                }
            }else{
                int cnt = 0;
                for(int i=0; i<s.size(); i++){
                    if(s[i] == 'B') cnt++;
                    if(cnt==countB-k){
                        cout << 1 << "\n" << i+1 << " " << "A\n";
                        break;
                    }
                }
            }

        }
    }


    return 0;
}
