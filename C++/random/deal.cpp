#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll power(ll d)
{
	ll ans;
	if(d == 0)
	{
		return 1;
	}
	else if(d%2 == 0)
	{
		ans = power(d/2);
		return ans*ans;
	}
	else
	{
		return 2*power(d-1);
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll a, i, arr[50], d1, d2, max = INT_MIN, index;
		cin >> a;
		for(i = 1; i < 50; i++)
		{
			arr[i] = a*i + 1 - power(i);
			if(arr[i] > max)
			{
				max = arr[i];
				index = i;
			}
		}
		d2 = index;
		for(i = 1; i < 50; i++)
		{
			if(arr[i] <= 0)
				{
					d1 = i-1;
					break;
				}
		}
		cout << d1 << " " << d2 << endl; 
	}
}