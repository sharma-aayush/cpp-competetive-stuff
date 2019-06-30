#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = (int) 1e9 + 7;
bool isfriend(ll player, ll fedor, int k, int n)
{
	int diff = 0;
	for(int i = 0; i < n ; i++)
	{
		int one = player&(1<<i);
		int two = fedor&(1<<i);
		if(one != two)
			diff++;
		// cout << one << "," << two << " "; 
	}
	// cout << diff << " ";
	// cout << diff << endl; 
	if(diff <= k)
		return true;
	return false;
}
int main()
{
	int n, m, k, count = 0;
	cin >> n >> m >> k;
	vector<ll> army(m+1);
	for(int i = 0; i <= m; i++)
	{
		cin >> army[i];
	}
	for(int i = 0; i < m; i++)
	{
		if(isfriend(army[i], army[m], k, n))
			count++;
	}
	cout << count;
}