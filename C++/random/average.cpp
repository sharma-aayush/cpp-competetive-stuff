#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, v, k, i;
		cin >> n >> k >> v;
		int arr[n], sum = 0;
		for(i = 0; i < n; i++)
		{
			cin >> arr[i];
			sum += arr[i];
		}
		int num = (n+k)*v - sum;
		if(num%k == 0 && num > 0)
		{
			cout << num/k << endl;
		}
		else
		{
			cout << -1 << endl;
		}
	}
}