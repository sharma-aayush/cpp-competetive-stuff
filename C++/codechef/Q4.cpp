#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = (int) 1e9 + 7;
int reverse(int n)
{
	if(n < 10)
		return n;
	vector<int>num;
	while(n > 0)
	{
		num.push_back(n%10);
		n /= 10;
	}
	int res = 0;
	for(int i = 0; i < num.size(); i++)
	{
		res = 10*res + num[i];
	}
	return res;
}
int main()
{
	int t;
	cin >> t;
	while(t--) 
	{
		int n, revmax = 1, main = 1, temp;
		cin >> n;
		for(int i = 1; i <= n; i++)
		{
			temp = reverse(i);
			if(temp > revmax)
			{
				revmax = temp;
				main = i;
			}
			// cout << temp << " ";
		}
		cout << main << endl;
	}
}