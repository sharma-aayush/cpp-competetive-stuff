#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = (int) 1e9 + 7;
int main()
{
	ll n, m, curr, time = 0;
	cin >> n >> m;
	vector<ll> task(m);
	for(int i = 0; i < m; i++)
	{
		cin >> task[i];
		task[i]--;
	}
	curr = 0;
	for(int i = 0; i < m; i++)
	{
		if(task[i] < curr)
			time += (task[i]-curr+n)%n;
		else
			time += task[i]-curr;
		curr = task[i];
	}
	cout << time;
	return 0;
}