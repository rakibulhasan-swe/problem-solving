#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        int n1, n2;
        cin >> n1 >> n2;
        vector<int> v1(n1), v2;

        for(int i=0; i<n1; i++) cin >> v1[i];

        for(int i=0; i<n2; i++){
            int val;
            cin >> val;
            if(v2.empty() || v2.back()>val)
                v2.push_back(val);
        }

        for(int i=0; i<n1; i++){
            for(int j=0; j<v2.size(); j++){
                if(v1[i]%(1<<v2[j])==0) v1[i] |= 1 << (v2[j]-1);
            }
        }

        for(int i=0; i<n1; i++)
            cout << v1[i] << " \n"[i==n1-1];
    }



    return 0;
}
