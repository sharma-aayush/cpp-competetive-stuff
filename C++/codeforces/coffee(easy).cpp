#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n, m, i, count = 0, sum = 0;
	cin >> n >> m;
	int arr[n];
	for(i = 0; i < n ; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr, arr+n, greater<int>());
	if(sum < m)
	{
		cout << -1;
		return 0;
	}
	if(sum == m)
	{
		cout << n;
		return 0;
	}
	int diff = sum-m, next = 0;
	sum = 0;
	while(sum <= m)
	{
		for(i = 0; diff >= i && a[next] > i; i++)
		{
			sum += max(0, a[next] - i);
			diff -= i;
			next++;
		}
		count++;
	}
	cout << count;
	return 0;
}