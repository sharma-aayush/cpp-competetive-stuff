#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = (int) 1e9 + 7;
int main()
{
	int n, m, from, to, win;
	cin >> n >> m;
	map<int, int>data;
	for(int i = 0; i < m; i++)
	{
		cin >> from >> to >> win;
		for(int j = from; j <= to; j++)
		{
			if(data[j] == 0 && j != win)
				data[j] = win;
		}
		if(i == m-1)
		{
			data[win] = 0;
		}
	}
	// sort(map.begin(), map.end());
	for(auto p : data)
	{
		cout << p.second << " ";
	}
	return 0;
}
/*


#include <stdio.h>

const int N = 300000 + 10;

int anc[N];

int find(int x) { return anc[x] == x ? x : (anc[x] = find(anc[x])); }

int n, m;

int ans[N];

int main() {
  scanf("%d%d", &n, &m);
  for (int i = 1; i <= n + 1; ++i) anc[i] = i;
  while (m--) {
    int l, r, x;
    scanf("%d%d%d", &l, &r, &x);
    for (int i = find(l); i < x; i = find(i + 1)) ans[i] = anc[i] = x;
    for (int i = find(x + 1); i <= r; i = find(i + 1)) ans[i] = x, anc[i] = find(r + 1);
  }
  for (int i = 1; i <= n; ++i) printf("%d ", ans[i]);
  return 0;
}
*/