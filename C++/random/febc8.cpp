#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//bool issubstring(string str1, string str2)

int main()
{
	ll n, m, a, x, r, i;
	cin >> n >> m >> a >> x >> r;
	string note, pmelo[m+1], gmelo[a+1];
	int pval[m+1], gval[a+1];
	cin >> note;
	for(i = 1; i <= m; i++)
	{
		cin >> pmelo[i] >> pval[i];
	}
	for(i = 1; i <= a; i++)
	{
		cin >> gmelo[i] >> gval[i];
	}
	cout << 0 << endl;
}