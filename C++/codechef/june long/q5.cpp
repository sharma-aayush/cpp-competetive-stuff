#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = (int) 1e9 + 7;
ll gcd(ll a, ll b)
{
	if(a < b)
		swap(a, b);
	if(b == 0)
		return a;
	if(a%b == 0)
		return b;
	else
		return gcd(b, a%b);
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector<ll> v(n);
		for(int i = 0; i < n; i++)
			cin >> v[i];
		sort(v.begin(), v.end());
		auto it = unique(v.begin(), v.begin()+n);
		v.resize(distance(v.begin(), it));
		int t = v.size();
		vector<ll>gcds(t);
		ll ans = -1, num = 0, dummy;
		if(t == 1)
		{
			ans = 2*v[0];
			cout << ans << endl;
			continue;
		}
		for(int i = 0; i < t; i++)
		{
			gcds[i] = gcd(v[i], num);
			num = gcds[i];
			// cout << gcds[i] << " ";
		}
		// cout << endl;
		ans = v[t-1] + gcds[t-2];
		int k = t-2;
		dummy = v[t-1];
		while(1)
		{
			// cout << ans << endl;
			if(k < 1 && v[k]+dummy <= ans)
				break;
			ans = max(ans, v[k] + gcd(dummy, gcds[k-1]));
			dummy = gcd(dummy, v[k]);
			k--;
		}
		cout << ans << endl;
	}
}