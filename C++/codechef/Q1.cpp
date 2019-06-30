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
		int n, count = 0;
		cin >> n;
		string str;
		cin >> str;
		if(n == 1)
		{
			cout << 0 << endl;
			continue;
		}
		for(int i = 1; i < n; i++)
		{
			if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			{
				if(str[i-1] != 'a' && str[i-1] != 'e' && str[i-1] != 'i' && str[i-1] != 'o' && str[i-1] != 'u')
				{
					count++;
				}
			}
		}
		cout << count << endl;
	}
}