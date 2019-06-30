#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = (int) 1e9 + 7;
int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		string ori, type;
		cin >> ori >> type;
		vector<pair<char, int>>v1, v2;
		int i = 0;
		while(i < ori.length())
		{
			int count = 0;
			while(i+1 < ori.length() && ori[i] == ori[i+1])
			{
				i++;
				count++;
			}
			count++; i++;

		}
	}
}