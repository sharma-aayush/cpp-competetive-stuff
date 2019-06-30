#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int q;
	cin >> q;
	while(q--)
	{
		ll n, a, b, ans;
		cin >> n >> a >> b;
		if(b >= 2*a)
		{
			ans = a*n;
			cout << ans << endl;
			continue;
		}
		else
		{
			ans = (n%2)*a + (n/2)*b;
			cout << ans << endl;
			continue;	
		}
	}
}