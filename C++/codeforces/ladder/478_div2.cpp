#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = (int) 1e9 + 7;
int main()
{
	ll n, m;
	ll kmax, kmin;
	cin >> n >> m;
	kmax = (n-m+1)*(n-m);
	kmax /= 2;
	ll p = n/m;
	kmin = (n%m)*(p+1)*p + (m-n%m)*(p-1)*p;
	kmin /= 2;
	if(m == 1)
		kmin = kmax;
	cout << kmin << " " << kmax;
}