#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n, i, j, k, count = 0, mid;
	ll one, two;
	cin >> n;
	ll arr[n];
	for(i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for(i = 0; i < n-1; i++)
	{
		for(j = i+1; j < n; j = j+2)
		{
			if(j == i+1)
			{
				one = arr[i];
				two = arr[j];
				if(one == two)
				{
					//cout << i << " " << j << endl;
					count++;
				}
			}
			else
			{
				mid = (i+j-1)/2;
				one = one^arr[mid];
				two = (((two^arr[mid])^arr[j-1])^arr[j]);
				if(one == two)
				{
					//cout << i << " " << j << endl;
					count++;
				}
			}
		}
	}
	cout << count;
}