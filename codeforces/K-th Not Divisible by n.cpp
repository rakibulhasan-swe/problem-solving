#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    ll t;
	cin >> t;
	while(t--)
	{
		ll n,k;
		cin >> n >> k;
		ll total=k, ex=k;

		while(1)
		{
			total+=(ex/n);
			ex=(ex/n)+(ex%n);
			if(ex<n)
				break;
		}
		cout << total << "\n";

	}

    return 0;
}

