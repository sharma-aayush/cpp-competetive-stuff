#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n, v, i, ans = 0;
	cin >> n >> v;
	double t;
	int t_whole = (n-1)/v;
	t = (double)(n-1)/v;
	if(v >= n-1)
	{
		ans = n-1;
		cout << ans;
		return 0;
	}
	ans += v;
	for(i = 2; n-i >= v; i++)
	{
		ans += i;
	}
	cout << ans;
	return 0;
}