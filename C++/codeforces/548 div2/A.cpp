#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fr(i, n) for(i = 0; i < n; i++)
#define push_back pb;
int main()
{
	int n, i;
	cin >> n;
	string str;
	cin >> str;
	int sum = 0;
	for(i = 0; i < str.length(); i++)
	{
		if(((int)str[i]-'0')%2 == 0)
		{
			sum += i+1;
		}
	}
	cout << sum << endl;
}