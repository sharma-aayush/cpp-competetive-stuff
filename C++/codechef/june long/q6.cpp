#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = (int) 1e9 + 7;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k, x, pos = 0, insum = 0;;
		cin >> n;
		vector<pair<int, int>>arr(n);
		for(int i = 0; i < n; i++)
		{
			cin >> (arr[i].first);
		}
		cin >> k >> x;
		for(int i = 0; i < n; i++)
		{
			arr[i].second = (((arr[i].first)^x) - arr[i].first);
		}
		// cout << "alive " << endl;
		sort(arr.begin(), arr.end(), [](pair<int, int>a, pair<int, int>b){
			return a.second > b.second;
		});
		vector<int>profit(n);
		for(int i = 0; i < n; i++)
		{
			cout << (arr[i].first) << " ";
			// insum += arr[i].first;
		}
		cout << insum << endl;
		
		for(int i = 0; i < n; i++)
		{
			
			if(!i)
			{
				profit[0] = arr[0].second;
			}
			else
			{
				profit[i] = arr[i].second+profit[i-1];
			}
			if(arr[i].second >= 0)
			{
				pos++;

			}
			cout << (arr[i].second) << " ";
		}
		cout << endl;
		for(int i = 0; i < n; i++)
		{
			cout << (profit[i]) << " ";
		}
		cout << endl;
		if(pos >= k)
		{
			if(pos%k == 0)
			{
				insum += profit[pos-1];
				for(int i = 0; i < pos; i++)
					insum += arr[i].first;
			}
			else
			{
				int q = pos/k, rem = pos%k;
				insum += profit[pos-rem-1];
				cout << insum << endl;
				int l = pos-rem, r = l+k-1;
				cout << l << " " << r << endl;
				if(r >= n)
				{
					r = n-1;
					l = r-k;
				}
				int curr = profit[r]-profit[l-1], temp = curr;
				l--; r--;
				// cout << temp << " ";
				while(r >= pos-1)
				{
					temp -= arr[r+1].second;
					temp -= arr[l].second;
					curr = max(curr, temp);
					l--; r--;
					// cout << temp << " ";
				}
				cout << l << " " << r << endl;
				insum += max(0, curr);
			}
		}
		else
		{
			insum += max(0, profit[k-1]);
		}
		cout << insum << endl;
	}
}