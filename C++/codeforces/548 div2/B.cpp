#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fr(i, n) for(i = 0; i < n; i++)
#define push_back pb;
int main()
{
	int n, i;
	cin >> n;
	ll arr[n];
	for(i = 0; i < n; i ++)
	{
		cin >> arr[i];
	}
	ll brr[n], zero = 0;
	brr[n-1] = arr[n-1];
	for(i = n-2; i >= 0; i--)
	{
		if(arr[i] < brr[i+1])
		{
			brr[i] = arr[i];
		}
		else
		{
			brr[i] = max(zero, brr[i+1]-1);
		}
	}
	ll sum = 0;

	fr(i, n)
	{
		sum += brr[i];
		//cout << brr[i] << " ";
	}
	cout << sum;
	// ll min = arr[n-1];
	// for(i = n-1; i >= 0; i--)
	// {
	// 	if(arr[i] < min)
	// 	{
	// 		//arr[i] = min;
	// 		min = arr[i];
	// 	}
	// 	else
	// 	{
	// 		arr[i] = min;
	// 	}
	// }
	// ll sum = 0;
	// for(i = 0; i < n-1; i++)
	// {
	// 	if(arr[n-1]-arr[i] >= n-1-i)
	// 	{

	// 	}
	// }
}