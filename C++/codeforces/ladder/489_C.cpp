#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = (int) 1e9 + 7;
int main()
{
	int len, sum;
	cin >> len >> sum;
	if(sum < 1 || sum > 9*len)
	{
		cout << -1 << " " << -1;
		return 0;
	}
	ll kmax = 0, kmin = 0;
	int nine = sum/9;
	vector<int> maxi(len), mini(len);
	if(nine > 0)
	{
		for(int i = 0; i < nine; i++)
			{maxi[i] = 9; mini[len-1-i] = 9;}
	}
	int rem = sum - 9*nine;
	if(nine < len)
	{
		for(int i = nine; i < len; i++)
		{
			if(i == nine)
				maxi[i] = rem;
			else
				maxi[i] = 0;
		}
		for(int i = 0; i < len-nine; i++)
		{
			if(i == len-nine-1)
				mini[i] = max(0, rem-1);
			else if(len-nine-1 > 0 && i == 0)
				mini[i] = 1;
			else if(len-nine-1 > 1)
				mini[i] = 0;
			else(0);
		}
	}
	for(int p : mini)
		cout << p;
	cout << endl;
	for(int p : maxi)
		cout << p;
	cout << endl;
}