#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while (t--) {
        int n, res = 0;
        cin >> n;
        string s; cin >> s;

        int dot = 0, hash = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i] == '.' && hash == 1){
                res++;
                dot++;
            }else if(s[i] == '.' && hash==0){
                res++;
                dot++;
                hash++;
            }else if(s[i]=='#' && hash==1){
                dot = 0;
                hash = 0;
            }
            if(dot >= 3){
                res = 2;
                break;
            }
        }
        cout << res << "\n";
    }

    return 0;
}
