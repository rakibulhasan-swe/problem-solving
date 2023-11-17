//https://codeforces.com/problemset/problem/479/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long ans, a, b, c;
    while(cin >> a >> b >> c){
        ans = a+b+c;
		ans = max(ans,(a*b*c));
		ans = max(ans,(a+b)*c);
		ans = max(ans,a*(b+c));
		ans = max(ans,a+(b*c));
		ans = max(ans,(a*b)+c);
		cout<< ans <<"\n";
    }
    return 0;
}

