#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fr(i, n) for(i = 0; i < n; i++)
#define push_back pb;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int dr[4] = {1, -1, 0, 0};
int dc[4] = {0, 0, 1, -1};
int arr[50][50];
bool vis[50][50] ;
int n, i, j, k, l, r1, c1, r2, c2, cost = 0;
void dfs(int r, int c, int z)
{
	if(r == r2 && c == c2 && z == 2) {
		cost = 0;
		return;
	}
	vis[r][c] = true;
	arr[r][c] = z;
	for(i = 0; i < 4; i++)
	{
		int nx = r + dr[i];
		int ny = c + dc[i];
		//if(nr >= 0 && nr < n && nc >= 0 && nc < n && arr[nr][nc] != 1)
		//{
		//	if(!vis[nr][nc])
		//		dfs(nr, nc, z);
		//}
		if(nx >= 0 && nx < n)
			if(ny >= 0 && ny < n)
				if(!vis[nx][ny])
					if(arr[nx][ny] != 1)
						dfs(nx, ny, z);
	}
}
int main()
{
	//fastio
	int x1, y1, x2, y2;
	cin >> n;
	cin >> r1 >> c1 >> r2 >> c2;
	r1--,r2--, c1--, c2--;
	char c;
	string str[n];
	fr(i, n)
	{
		cin >> str[i];
		//cout << "done" << endl;
		fr(j, n)
		{
			if(str[i][j] == '0')
				arr[i][j] = 0;
			else
				arr[i][j] = 1;
		}
	}
	dfs(r1, c1, 2);
	/*fr(i, n)
	{
		fr(j, n)
		{
			vis[i][j] = false;
		}
	}
	dfs(r2-1, c2-1, 3);
	cost = INT_MAX;*/
	fr(i, n)
	{
		fr(j, n)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
	/*
	fr(i, n)
	{
		fr(j, n)
		{
			fr(k, n)
			{
				fr(l, n)
				{
					if(arr[i][j] == 2 && arr[k][l] == 3)
						{
							cost = min(cost, (k-i)*(k-i) + (l-j)*(l-j));
							x1 = i, y1 = j, x2 = k, y2 = l;
						}
				}
			}
		}
	}
	if(cost == INT_MAX)
		cost = 0;
	cout << cost << endl;
	cout << x1+1 << " " << y1+1 << " " << x2+1 << " " << y2+1 << endl;
	*/
}