#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, i, ans = 0, num;
        cin >> n;
        for(i = 0; i < n; i++)
        {
            cin >> num;
            ans += num-1;
        }
        ans++;
        cout << ans << endl;
    }
}
