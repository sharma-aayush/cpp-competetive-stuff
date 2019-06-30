#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string str;
		cin >> str;
		int n = str.length();
		if(n == 1)
		{
			if(str[0] != '4' && n != '8')
				cout << "NO" << endl;
			else
			{
				cout << "YES " << str[0] << endl;
			}
		}
		else
		{
			for(i = 0; i < n; i++)
			{
				if(str[i] == '4' || str[i] == '8')
				{
					cout << "YES " << str[i] << endl;
				}
			}
			for(i = 0; i < n; i++)
			{
				if(str[i] == '2')
				{
					
				}
			}
		}
	}
}