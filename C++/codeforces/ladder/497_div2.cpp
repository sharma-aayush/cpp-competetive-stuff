#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = (int) 1e9 + 7;
int main()
{
	int n, l;
	cin >> n >> l;
	vector<long double> lamps(n);
	for(int i = 0; i < n; i++)
		cin >> lamps[i];
	sort(lamps.begin(), lamps.end());
	// for(int i = 0; i < n; i++)
	// {
	// 	cout << lamps[i] << " ";
	// }
	long double d = -1;
	d = max(lamps[0], l-lamps[n-1]);
	// cout << endl << d << " ";
	if(n == 1)
		{cout<< fixed << setprecision(6) << d; return 0;}
	for(int i = 0; i < n-1; i++)
	{
		d = max(d, (lamps[i+1]-lamps[i])/2);
		// cout << d << " ";
	}
	cout<< fixed << setprecision(6) << d;
}

/*
46 615683844

431749087 271781274 274974690 324606253 480870261 401650581 13285442 478090364 266585394 425024433 588791449 492057200 391293435 563090494 317950 173675329 473068378 356306865 311731938 192959832 321180686 141984626 578985584 512026637 175885185 590844074 47103801 212211134 330150 509886963 565955809 315640375 612907074 500474373 524310737 568681652 315339618 478782781 518873818 271322031 74600969 539099112 85129347 222068995 106014720 77282307
*/