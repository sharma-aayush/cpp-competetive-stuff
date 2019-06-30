#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 50 + 10;
const int dx[4] = {1, -1, 0, 0};
const int dy[4] = {0, 0, 1, -1};
int n, r1, c1, r2, c2;
int mp[maxn][maxn];
bool vis[maxn][maxn];
int ans = 0x7f7f7f7f;
void dfs(int x, int y, int z) {
	if(x == r2 && y == c2 && z == 2) {
		ans = 0;
		return;
	}
	vis[x][y] = 1;
	mp[x][y] = z;
	for(int i = 0; i < 4; i++) {
		int nx = x + dx[i], ny = y + dy[i];
		if(nx >= 1 && nx <= n)
			if(ny >= 1 && ny <= n)
				if(!vis[nx][ny])
					if(mp[nx][ny] != 1)
						dfs(nx, ny, z);
	}
}
int dis(int a, int b, int c, int d) {
	return (c - a) * (c - a) + (d - b) * (d - b);
}
int main() {
	scanf("%d", &n);
	scanf("%d%d%d%d", &r1, &c1, &r2, &c2);
	for(int i = 1; i <= n; i++) {
		char s[maxn];
		scanf("%s", s + 1);
		for(int j = 1; j <= n; j++) mp[i][j] = s[j] - '0';
	}
	dfs(r1, c1, 2);
	//dfs(r2, c2, 3);
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) cout << mp[i][j];
		cout << endl;
	}
/*	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			for(int k = 1; k <= n; k++)
				for(int l = 1; l <= n; l++)
					if(mp[i][j] == 2 && mp[k][l] == 3)
						ans = min(ans, dis(i, j, k, l));
	printf("%d\n", ans);*/
}