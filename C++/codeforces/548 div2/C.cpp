#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = (int) 1e9 + 7;
/*#define ms(s, n) memset(s, n, sizeof(s))
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
//#define FORall(it, a) for (__typeof((a).begin()) it = (a).begin(); it != (a).end(); it++)
#define sz(a) int((a).size())
#define present(t, x) (t.find(x) != t.end())
#define all(a) (a).begin(), (a).end()
#define uni(a) (a).erase(unique(all(a)), (a).end())
#define push_back pb
#define push_front pf
#define make_pair mp
#define first fi
#define second se
#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)

typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int FFTMOD = 119 << 23 | 1;
const int INF = (int) 1e9 + 23111992;
const ll LINF = (ll) 1e18 + 23111992;
const ld PI = acos((ld) -1);
const ld EPS = 1e-9;
inline ll gcd(ll a, ll b) {ll r; while (b) {r = a % b; a = b; b = r;} return a;}
inline ll lcm(ll a, ll b) {return a / gcd(a, b) * b;}
template<class T> inline int chkmin(T& a, const T& val) {return val < a ? a = val, 1 : 0;}
template<class T> inline int chkmax(T& a, const T& val) {return a < val ? a = val, 1 : 0;}
inline ull isqrt(ull k) {ull r = sqrt(k) + 1; while (r * r > k) r--; return r;}
inline ll icbrt(ll k) {ll r = cbrt(k) + 1; while (r * r * r > k) r--; return r;}
inline void addmod(int& a, int val, int p = MOD) {if ((a = (a + val)) >= p) a -= p;}
inline void submod(int& a, int val, int p = MOD) {if ((a = (a - val)) < 0) a += p;}
inline int mult(int a, int b, int p = MOD) {return (ll) a * b % p;}
inline int inv(int a, int p = MOD) {return fpow(a, p - 2, p);}
inline int sign(ld x) {return x < -EPS ? -1 : x > +EPS;}
inline int sign(ld x, ld y) {return sign(x - y);}
mt19937 mt(chrono::high_resolution_clock::now().time_since_epoch().count());
inline int myrand() {return abs((int) mt());}
#define db(x) cerr << #x << " = " << (x) << " ";
#define endln cerr << "\n"*/
#define MAXN 100005

ll fpow(ll n, ll k, int p = MOD) 
{
	ll r = 1; 
	for (; k; k >>= 1) 
		{
			if (k & 1) 
				r = r * n % p; 
			n = n * n % p;
		} 
	return r;
}

vector<vector<pair<int, int>>> adj(MAXN);
vector<int> visited(MAXN);
int n, k;

int DFS(int k)
{
	visited[k] = 1;
	vector<pair<int, int>>::iterator it;
	int count = 0;
	for(it = adj[k].begin(); it != adj[k].end(); it++)
	{
		if(visited[it.first] || it.second) continue;
		count += DFS(it.first);
	}
	return count;
}

int main()
{
	cin >> n >> k;
	for (int i = 0; i < n-1; ++i)
	{
		pair<int, int> ii;
		int from;
		cin >> from >> ii.first >> ii.second;
		adj[from].push_back(ii);
	}
	vector<int> count;
	for(int i = 0; i < n; i++)
	{
		if(visited[i] == 0)
		{
			count.push_back(DFS(i));
		}
	}
	ll ans = fpow(n, k);
	for(int i = 0; i < count.size(); i++)
	{
		ans -= fpow(count[i], k);
	}
	ans = (ans + MOD)%MOD;
	cout << ans;
}