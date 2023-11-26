#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    int sum = 0;
    for(int i=0; i<n; i++){
        char digit_char;
        cin >> digit_char;
        sum+= (digit_char-'0');
    };
    cout << sum << "\n";

    return 0;
}