#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fr(i, n) for(i = 0; i < n; i++)
#define push_back pb;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
	int n, i, pos = 0, zero = 0, neg = 0;
	cin >> n;
	int arr[n];
	fr(i, n)
	{
		cin >> arr[i];
		if(arr[i] == 0)
			zero++;
		else if(arr[i] < 0)
			neg++;
		else
			pos++;
	}
	if(neg < (n+1)/2 && pos < (n+1)/2)
	{
		cout << 0;
		return 0;
	}
	else if(neg >= (n+1)/2)
	{
		cout << -1;
		return 0;
	}
	else
	{
		cout << 1;
		return 0;
	}
}