#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        unordered_map<int, int> m;
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            m[v[i]]++;
        }
        int j = 0;
        set<int> s, s1;

        while(m[j]>=2){
            s.insert(j);
            s1.insert(j);
            j++;
        }

        if(m[j]>0) cout << "-1\n";
        else {
            int r = 0;
            for(int i=0; i<n; i++){
                if(s.find(v[i]) != s.end()){
                    s.erase(v[i]);
                }
                if(s.size()==0){
                    r=i+1;
                    break;
                }
            }
            for(int i=r; i<n; i++){
                if(s1.find(v[i]) != s1.end()){
                    s1.erase(v[i]);
                }
            }
            if(s1.size()==0){
                cout << "2\n";
                cout << "1 " << r << "\n";
                cout << r+1 << " " << n << "\n";
            }else cout << "-1\n";
        }
    }

    return 0;
}
