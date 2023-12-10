#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        int max_count = 0, count = 1;
        for (int i = 0; i < s.length()-1; i++) {
            if (s[i] == s[i+1]) {
                count++;
                max_count = max(max_count, count);
            } else {
                count = 1;
            }
        }
        if(max_count == 0)
            cout << 4 << "\n";
        else if(max_count == 2)
            cout << 4 << "\n";
        else if(max_count == 3)
            cout << 6 << "\n";
        else if(max_count == 4)
            cout << -1 << "\n";
    }

    return 0;
}
