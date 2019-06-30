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
		string str;
		cin >> str;
		int n = str.length();
		vector<int>alpha(26, 0);
		vector<int> vect;
		for(int i = 0 ; i < n ;i++)
		{
			alpha[(int)str[i] - 'a']++;
		}
		for(int i = 0; i < 26; i++)
		{
			if(alpha[i]%2 != 0)
			{
				vect.push_back(alpha[i]);
			}
		}
		if(n%2 == 0)
		{
			if(vect.size() != 2)
			{
				cout << "!DPS" << endl;
				continue;
			}
			else
			{
				cout << "DPS" << endl;
				continue;
			}
		}
		else
		{
			if(vect.size() == 1 || vect.size() == 3)
			{
				cout << "DPS" << endl;
				continue;
			}
			else
			{
				cout << "!DPS" << endl;
				continue;
			}
		}
	}
	return0;
}