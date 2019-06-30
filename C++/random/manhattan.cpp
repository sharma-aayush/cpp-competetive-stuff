#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll F = 1000000000;
//#define zero 0;
int main()
{
	ll z = 0;
	ll t;
	cin >> t;
	while(t--)
	{
		ll k1, k2, k3, k4, k5, a, b, l, br;
		cout << "Q " << z << " " << z << endl;
		cin >> k1;
		cout << "Q " << F << " " << z << endl;
		cin >> k2;
		k2 = F - k2;
		cout << "Q " << z << " " << F << endl;
		cin >> k3;
		k3 = F - k3;
		cout << "Q " << (k1 + k2)/2 << " " << z << endl;
		cin >> k4;
		b = k4;
		a = k1 - b;
		l = k2 - a + b;
		br = k3 + a - b;
		cout << "A " << a << " " << b << " " << a+l << " " << b+br << endl;;
	}
}
