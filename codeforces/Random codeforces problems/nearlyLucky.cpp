//https://codeforces.com/problemset/problem/110/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, count = 0;
    cin >> n;

    while(n!=0){
        int lastDigit = n%10;
        if(lastDigit==4 || lastDigit==7){
            count++;
            n/=10;
            continue;
        }else{
            n/=10;
        }
    }

    if(count == 4 || count == 7)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
