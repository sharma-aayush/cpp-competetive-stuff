#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll F = 1000000000;
#define zero 0;
int main()
{
	ll z = 0;
	ll t;
	cin >> t;
	while(t--)
	{
		string str;
		cin >> str;
		ll len = str.length(), i,j, ans = 1000000000, alpha[26] = {0}, use[26], count =0;
		for(i = 0; i < len; i++)
		{
			alpha[(int)str[i] - 'A']++;
		}
		sort(alpha, alpha+26, greater<int>());
		/*for(i = 0; i < 26; i++)
		{
			if(alpha[i] > 0)
				vect.push_back(alpha[i]);
		}
		int l = vect.size();*/
		for(i = 1; i <= 26; i++)
		{
			if(len % i == 0)
			{
				for(j = 0; j < 26; j++)
				{
					if(j < i)
						use[j] = (len/i);
					else
						use[j] = 0;
				}
				for(j = 0; j < 26; j++)
				{
					count += abs(alpha[j] - use[j]);

				}
				count /= 2;
				if(count < ans)
					ans = count;
				count = 0;
				for(j = 0; j < 26; j++)
				{
					use[j] = 0;
				}
			}
		}
		cout << ans << endl;
	}
}