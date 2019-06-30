#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = (int) 1e9 + 7;
int search(int l, vector<int>&arr)
{

	int left = l, right = arr.size()-1, mid;
	while(left <= right)
	{
		
		mid = (left+right)/2;
		if(mid == left)
		{

		}
		if(arr[mid] <= 2*arr[l])
		{
			left = mid;
		}
		else
		{
			right = mid;
		}
	}
	cout << right << endl;
	return right;
}
int main()
{
	ll n, ans = 0;
	cin >> n;
	vector<ll> arr(n);
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
		arr[i] = abs(arr[i]);
	}
	vector<ll>::iterator itr;
	sort(arr.begin(), arr.end());
	for(int i = 0; i < n; i++)
	{
		if(arr[n-1] > 2*arr[i])
		{
			itr = upper_bound(arr.begin(), arr.end(), 2*arr[i]);
			itr--;
			ll diff = itr-arr.begin();
			ans += max((ll)i, diff)-i;
		}
		else
		{
			ans += n-1-i;
		}
	}
	cout << ans;
}