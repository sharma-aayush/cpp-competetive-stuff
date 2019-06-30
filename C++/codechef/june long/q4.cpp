#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
typedef long long ll;
ll mod = 1000000007;
 
int main() {
    ll t;
    cin >> t;
 
    next: while(t-- > 0) {
        ll n, k;
        cin >> n >> k;
 
        if(n >= k) {
            cout << (k-1) % mod << endl;
            goto next;
        }
 
        ll x = (k-2) / (n-1);
 
        ll xm = x % mod;
        ll xom = (x+1) % mod;
        ll xsum = ((xm * xom)/2) % mod;
        ll kom = (k-1) % mod;
        ll nom = (n-1) % mod;
 
        ll ans = (((xom * kom) % mod) - ((xsum * nom) % mod) + mod) % mod;
 
        cout << ans % mod << endl;
    }
 
    return 0;
}