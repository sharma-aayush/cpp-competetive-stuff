#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n, m, i, count = 0, sum = 0;
	cin >> n >> m;
	int arr[n];
	for(i = 0; i < n ; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr, arr+n, greater<int>());
	if(sum < m)
	{
		cout << -1;
		return 0;
	}
	if(sum == m)
	{
		cout << n;
		return 0;
	}
	int diff = sum-m, next = 0, day = 0;
	sum = 0;
	while(sum < m)
	{
		for(i = 0; diff >= i && arr[next] > i && next < n; i++)
		{
			printf("%d ", arr[next]);
			sum += arr[next] - i;
			day += arr[next] - i;
			diff -= i;
			next++;
		}
		count++;
		printf("%d %d\n", day, next);
		day = 0;
	}
	cout << count << " " << next;
	return 0;
}
//100 550
//12 7 8 16 13 6 12 6 10 12 13 10 6 12 9 8 5 13 7 13 5 14 10 13 9 6 14 14 6 11 13 13 8 3 8 13 12 8 13 8 14 10 15 8 12 8 10 13 13 13 7 8 12 9 7 10 16 10 10 4 9 9 11 8 8 13 8 15 11 8 9 6 6 16 12 11 9 8 10 9 12 8 11 9 8 10 7 13 6 13 10 9 15 9 3 11 5 17 7 13

