#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fr(i, n) for(i = 0; i < n; i++)
#define push_back pb;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main ()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, i, pos = 0, neg = 0, zero = 0;
		cin >> n;
		ll arr[n];
		fr(i, n)
		{
			cin >> arr[i];
			if(arr[i] > 0)
				pos++;
			else if(arr[i] < 0)
				neg++;
			else
				zero++;
		}
		int max, min;
		if(pos >= neg)
		{
			if(neg != 0)
			{
				max = pos+zero;
				min = neg;
			}
			else
			{
				max = pos+zero;
				if(zero != 0)
					min = 1;
				else
					min = max;
			}
		}
		else
		{
			if(pos != 0)
			{
				max = neg + zero;
				min = pos;
			}
			else
			{
				max = neg + zero;
				if(zero != 0)
					min = 1;
				else
					min = max;
			}
		}
		cout << max << " " << min;
	}
}