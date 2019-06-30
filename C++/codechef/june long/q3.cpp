#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll M = (ll) 1e9 + 7;
ll power(ll k)
{
	if(k == 0)
		return 1;
	if(k%2)
	{
		return (2*power(k-1)%M)%M;
	}
	else
	{
		ll res = power(k/2)%M;
		return (res*res)%M;
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll k;
		cin >> k;
		ll ans = (5*power(k))%M;
		cout << ans << endl;
	}
}