#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n, i;
	cin >> n;
	int arr[n], ans = 0;
	for(i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	if(n==1)
	{
		ans = 1;
		cout << ans;
		return 0;
	}
	int sum1 = 0, sum2 = 0;
	for(i = 1; i < n; i += 2)
	{
		sum1 += arr[i];
	}
	for(i = 2; i < n; i += 2)
	{
		sum2 += arr[i];
	}
	if(sum1 == sum2)
		ans++;
	for(i = 1; i < n; i++)
	{
		if(i%2 == 1)
		{
			sum1 = sum1 - arr[i] + arr[i-1];
			if(sum1 == sum2)
				ans++;	
		}
		else
		{
			sum2 = sum2 - arr[i] + arr[i-1];
			if(sum1 == sum2)
				ans++;
		}
		
	}
	cout << ans;
	return 0;
}