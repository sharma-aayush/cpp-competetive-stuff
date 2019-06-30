#include<bits/stdc++.h>
using namespace std;
struct data
{
	int exam = 0;
	int social = 0;
};
int main()
{
	int n, k, i;
	cin >> n >> k;
	int info[n];
	for(i = 0; i < n; i++){
	cin >> info[i];
	}
	data num[k-1];
	for(i = 0; i < n; i++){
	if(info[i] == 1)
	num[(i+1)%k - 1].exam++;
	else
	num[(i+1)%k - 1].social++;
	}
	int ans[k-1];
	ans[0] = abs(num[0].exam - num[0].social);
	int maxi = ans[0];
	for(i = 1; i < k-1; i++){
	ans[i] = abs(num[i].exam - num[i].social);
	if(ans[i] > maxi)
	maxi = ans[i];
	}
	cout << maxi;
}
