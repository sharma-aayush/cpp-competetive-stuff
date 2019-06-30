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
		int n;
		string str;
		cin >> n >> str;
		int thresh = (n*3 + 3)/4, pres = 0, need;
		for(auto c : str)
		{
			if(c == 'P')
				pres++;
		}
		if(pres >= thresh)
		{
			cout << 0 << endl;
			continue;
		}
		need = thresh-pres;
		if(n < 5)
		{
			cout << -1 << endl;
			continue;
		}
		int proxy = 0;
		for(int i = 2; i < n-2; i++)
		{
			if(str[i] == 'A' && (str[i-1] == 'P' || str[i-2] == 'P') && (str[i+1] == 'P' || str[i+2] == 'P'))
				proxy++;
		}
		if(proxy >= need)
		{
			cout << need << endl;
		}
		else
		{
			cout << -1 << endl;
		}
	}
}