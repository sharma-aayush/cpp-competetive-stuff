#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int x, y, z, a, b, c, sum;
	cin >> x >> y >> z >> a >> b >> c;
	if(x > a)
	{
		cout << "NO";
		return 0;
	}
	else
	{
		a = a-x;
	}
	if(y > a+b)
	{
		cout << "NO";
		return 0;
	}
	else
	{
		sum = a+b+c-y;
	}
	if(z > sum)
	{
		cout << "NO";
		return 0;
	}
	else
	{
		cout << "YES";
		return 0;
	}
}