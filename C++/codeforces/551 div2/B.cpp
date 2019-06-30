#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = (int) 1e9 + 7;
int main()
{
	int n, m, h, i, j;
	cin >> n >> m >> h;
	int front[m], left[n], top[n][m];
	for(i = 0; i < m; i++)
	{
		cin >> front[i];
	}
	for(i = 0; i < n; i++)
	{
		cin >> left[i];
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			cin >> top[i][j];
		}
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			if(top[i][j])
			{
				top[i][j] = min(left[i], front[j]);
			}
		}
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			cout << top[i][j] << " ";
		}
		cout << '\n';
	}
}