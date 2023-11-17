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
		ll n, ans=0, temp=8;
		cin >> n;

		for(int i=1; i<=n/2; i++)
		{
			ans+=(temp*i);
			temp+=8;
		}
		cout << ans << "\n";
	}

    return 0;
}
