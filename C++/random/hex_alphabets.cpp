#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int arr[2000001], i, count = 0, j, num;
	int dig[6];
	for(i = 0; i < 6;i++)
	{
		dig[i] = (int)pow(16,i);
	}
	for(i = 0; i <= 2000000; i++)
	{
		count = 0;
		num=i;
		for(j = 5; j >= 0; j--)
		{
			if((num/dig[j]) > 9)
			{
				count++;
			}
			num  = num - ((num/dig[j])*dig[j]);
		}
		arr[i] = count;
	}
	for(i = 1;i <= 2000000; i++)
	{
		arr[i] = arr[i] + arr[i-1];
	}
	int t;
	cin >> t;
	while(t--)
	{
		int l, r;
		cin >> l >> r;
		int ans;
		ans = arr[r] - arr[l-1];
		cout << ans << endl;
	}
}