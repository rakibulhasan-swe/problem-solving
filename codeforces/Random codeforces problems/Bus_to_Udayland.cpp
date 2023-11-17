// https://codeforces.com/problemset/problem/711/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n;
    bool found = false;
    cin >> n;

    vector<string>bus(n);
    for(int i=0; i<n; i++)
        cin >> bus[i];

    for(int i=0; i<n; i++){
        if (bus[i].find("OO") != string::npos) {
            bus[i].replace(bus[i].find("OO"), 2, "++");
            found = true;
            break;
        }
    }

    if(found){
        cout << "YES\n";
        for(int i=0; i<n; i++){
            cout << bus[i] << endl;
        }
    }else
        cout << "NO\n";

    return 0;
}
