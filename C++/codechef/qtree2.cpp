#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = (int) 1e9 + 7;
vector<pair<int, int>> ans;
void dfs(vector<vector<pair<int, int>>>&graph, vector<bool>&vis, vector<pair<int, int>>&path , int to, pair<int, int>&curr)
{
	vis[curr.first] = true;
	path.push_back(curr);
	if(curr.first == to)
	{
		ans = path;
		return;
	}
	for(auto p : graph[curr.first])
	{
		if(!vis[p.first])
		{
			dfs(graph, vis, path, to, p);
		}
	}
	return;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	int n, from, to, wei, num, distance = 0, k;
	string quer;
	cin >> n;
	vector<vector<pair<int, int>>> graph(n+1);
	vector<bool>vis(n+1, false);
	for(int i = 0; i < n-1; i++)
	{
		cin >> from >> to >> wei;
		graph[from].push_back({to, wei});
		graph[to].push_back({from, wei});
	}
	while(1)
	{
		cin >> quer;
		if(quer == "DIST")
		{
			cin >> from >> to;
			vector<pair<int, int>> path;
			pair<int, int>curr({from, 0});
			dfs(graph, vis, path, to, curr);
			for(int i = 0; i < ans.size(); i++)
			{
				distance += ans[i].second;
			}
			cout << distance << endl;
			ans.clear(); path.clear(); distance = 0;
			for(int i = 0 ; i < vis.size(); i++)
			{
				vis[i] = false;
			}
		}
		else if(quer == "KTH")
		{
			cin >> from >> to >> k;
			vector<pair<int, int>> path;
			pair<int, int>curr({from, 0});
			dfs(graph, vis, path, to, curr);
			cout << ans[k-1].first << endl;
			ans.clear(); path.clear(); distance = 0;
			for(int i = 0 ; i < vis.size(); i++)
			{
				vis[i] = false;
			}
		}
		else
		{
			break;
		}
	}
}
	return 0;
}

/*
1

6
1 2 1
2 4 1
2 5 2
1 3 1
3 6 2
DIST 4 6
KTH 4 6 4

*/

/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int state[3][2], buy = 0, sell = 1, cool = 2, curr = 0, next = 1;
        memset(state, INT_MIN, sizeof(state));
        for(int i = 0, state[0][0] = 0; i < prices.size(); i++, swap(curr, next))
        {
            state[buy][next] = max(state[buy][curr], state[cool][curr]);
            state[sell][next] = max(state[buy][curr]-prices[i], state[sell][curr]);
            state[cool][next] = state[sell][curr] + prices[i];
        }
        return max(state[buy][curr], state[cool][curr]);
    }
};
*/