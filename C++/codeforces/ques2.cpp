#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int midf(int n)
{
	int i, mid = n;
	for(i = 1; i <= (int)sqrt(n); i++)
	{
		if(n%i == 0)
		{
			mid = i;
		}
	}
	return mid;
}
int main()
{
	int n, i, max = 0, diff, sum = 0, mid, j;
	cin >> n;
	int arr[n];
	for(i = 0; i < n ; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr+n);
	for(i = n-1; i> 0; i--)
	{
		for(j = 1; j <= arr[i]; j++)
		{
			if(arr[i]%j == 0)
			{
				diff = arr[i]+arr[0] - ((arr[i]/j) + (arr[0]*j));
				if(diff > max && diff > 0)
					max = diff;
			}
		}
	}
	for(i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	sum -= max;
	cout << sum;
}