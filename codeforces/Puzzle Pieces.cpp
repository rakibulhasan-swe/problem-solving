#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;

		if((n>=3 && m>1) || (m>=3 && n>1))
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}

    return 0;
}

