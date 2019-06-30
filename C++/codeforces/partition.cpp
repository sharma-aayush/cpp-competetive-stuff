#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n, m, k, i, max, beauty = 0, j;
	vector<int> vect;
	cin >> n >> m >> k;
	ll arr[n];
	for(i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int count = 0;
	while(count <= n)
	{
		if(vect.size() == k-1)
		{
			vect.push_back(n);
			break;
		}
		max = arr[count];
		for(i = count; i < count+m; i++)
		{
			if(arr[i] >= max)
				max = arr[i];

		}
		count += m;
		while((k-vect.size()-1)*m < n-count && arr[count] >= max)
		{
			max = arr[count];
			count++;
		}
		vect.push_back(count);
	}
	count = 0;
	/*while(count <= n)
	{
		if(vect.size() == k-1)
		{
			vect.push_back(n);
			break;
		}
		count += m;
		while((k-vect.size()-1)*m < n-count && arr[count] >= arr[count-1])
		{
			count++;
		}
		vect.push_back(count);	
	}
	count = 0;*/
	for(i = 0; i < vect.size(); i++)
	{
		if(i == 0)
		{
			sort(arr, arr+vect[i], greater<int>());
			for(j = 0; j < m; j++)
			{
				beauty += arr[j+count];
			}
			count += vect[i];
			continue;
		}
		sort(arr+vect[i-1], arr+vect[i], greater<int>());
		for(j = 0; j < m; j++)
		{
			beauty += arr[j+count];
		}
		count += vect[i]-vect[i-1];
	}
	cout << beauty << endl;
	for(i = 0; i < vect.size()-1; i++)
	{
		cout << vect[i] << " ";
	}
}