#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = (int) 1e9 + 7;
int main()
{
	int n, t;
	string str;
	cin >> n >> t;
	cin >> str;
	if(n == 1)
		{
			cout << str;
			return 0;
		}
	while(t--)
	{
		int i = 0;
		while(i < n)
		{
			if(str[i] == 'B' && str[i+1] == 'G')
			{
				str[i] = 'G'; str[i+1] = 'B';
				i += 2;
			}
			else
			{
				i++;
			}
		}
	}
	cout << str;
}