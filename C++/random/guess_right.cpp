#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll M = 1000000007;
// C function for extended Euclidean Algorithm (used to 
// find modular inverse. 
ll gcdExtended(ll a, ll b, ll *x, ll *y) 
{ 
    // Base Case 
    if (a == 0) 
    { 
        *x = 0, *y = 1; 
        return b; 
    } 
  
    ll x1, y1; // To store results of recursive call 
    ll gcd = gcdExtended(b%a, a, &x1, &y1); 
  
    // Update x and y using results of recursive 
    // call 
    *x = y1 - (b/a) * x1; 
    *y = x1; 
  
    return gcd; 
} 
ll modInverse(ll b, ll m) 
{ 
    ll x, y; // used in extended GCD algorithm 
    ll g = gcdExtended(b, m, &x, &y); 
  
    // Return -1 if b and m are not co-prime 
    if (g != 1) 
        return -1; 
  
    // m is added to handle negative x 
    return (x%m + m) % m; 
} 
  
// Function to compute a/b under modlo m 
ll modDivide(ll a, ll b, ll m) 
{ 
    a = a % m; 
    ll inv = modInverse(b, m); 
    if (inv == -1) 
    	return -1;
       //cout << "Division not defined"; 
    else
    	return (inv * a) % m;
       //cout << "Result of division is " << (inv * a) % m; 

} 
  
  
// Driver Program 
/*int main() 
{ 
    ll  a  = 1, b , m ;
    cin >> b >> m; 
    ll ans = modDivide(a, b, m); 
    cout << ans << endl;
    return 0; 
} */
ll power(ll inv, ll b)
{
	ll ans;
	if(b == 0)
	{
		ans = 1;
	}
	else if(b % 2 == 0)
	{
		ans = power(inv, b/2)%M;
		ans = (ans*ans)%M;
	}
	else
	{
		ans = (inv*power(inv, b-1))%M;
	}
	return ans%M;
}
int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n, k, m, i;
		cin >> n >> k >> m;
		ll ans; 
		ll n_inv = modDivide(1, n, M);
		ll npk_inv = modDivide(1, n+k, M);
		ll inv = (n_inv * (n-1)) % M;
		/*if(m%2 != 0)
		{
			ans = n_inv;
			if(m > 1)
			{
				for(i = 1; i <= (m-1)/2; i++)
				{
					ans = (ans*inv) % M;
					ans = (ans + n_inv) % M;
					ans = ans % M;
				}
			}

		}
		else
		{
			ans = npk_inv;
				for(i = 1; i <= (m/2); i++)
				{
					ans = (ans*inv) % M;
					ans = (ans + n_inv) % M;
					ans = ans % M;
				}
		}*/
		if(m%2 == 1)
		{
			ans = n_inv;
			if(m > 1)
				ans = (1 + M - power(inv, (m+1)/2))%M;
		}
		else
		{
			ans = (1 + M - power(inv, m/2) + (power(inv, m/2)*npk_inv)%M)%M;
		}
		cout << ans%M << endl;
	}
}