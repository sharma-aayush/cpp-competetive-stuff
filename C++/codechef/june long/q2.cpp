#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
const int MOD = (int) 1e9 + 7;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n, dup;
		cin >> n;
		int sum = 0;
		dup = n;
		while(dup)
		{
			sum += dup%10;
			dup /= 10;
		}
		int i;
		for(i = 0; i <= 9; i++)
		{
			if((sum + i)%10 == 0)
				break;
		}
		dup = 10*n + i;
		cout << dup << endl;
	}
}