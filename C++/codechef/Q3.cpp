#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = (int) 1e9 + 7;
ll gcd(ll a, ll b)
{
	if(a%b == 0)
	{
		return b;
	}
	else
	{
		return gcd(b, a%b);
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--) 
	{
		ll n, m, k;
		cin >> n >> m >> k;
		// cout << gcd(k, n) << " " << gcd(k, m) << endl;
		if(gcd(k, n) != 1 || gcd(k, m) != 1)
		{
			cout << -1 << endl;
		}
		else
		{
			cout << n*m << endl;
		}
		

	}
	return 0;
}