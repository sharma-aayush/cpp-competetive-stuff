#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fr(i, n) for(i = 0; i < n; i++)
//#define push_back pb;
int main()
{
	int n, m, i, key, val, j;
	cin >> n >> m;
	unordered_map<int, vector<int>> data;
	fr(i, m)
	{
		cin >> key >> val;
		data[key].push_back((val-key+n)%n);
	}
	int max = 0;
	/*for(auto x : data)
	{
		if(x.second.size() > max)
		{
			max = x.second.size();
		}
	}*/
	int arr[n];
	/*for(auto x: data)
	{
		if(x.second.size() == max)
		{
			count++;
			fr(i, max)
			{
				if(x.second[i] < min)
					min = x.second[i];
			}
			arr[x.first] = min;
			min = INT_MAX;
		}
	}*/
	for(auto x : data)
	{
		arr[x.first] = n;
		for(i = 0; i < x.second.size(); i++)
		{
			arr[x.first] = min(arr[x.first], x.second[i]);
		}
	}
	ll ans = 0;
	for(i = 1; i <= n; i++)
	{
		ans = 0;
		for(j = 1; j <= n; j++)
		{
			if(data[j].size() == 0)
				continue;
			if(((data[j].size() - 1)*n + (ll)arr[j] + (j-i+n)%n) > ans)
				ans = (data[j].size() - 1)*n + (ll)arr[j] + (j-i+n)%n;


		}
		cout << ans << " ";
	}
	return 0;
}