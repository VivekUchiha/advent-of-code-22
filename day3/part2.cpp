#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define LLMAX (1ll << 60) - 1
#define INTMAX (1 << 30) - 1
#define MOD 1000000007
#define NMAX 1000*100+1

#define numberOfSetBits(S) __builtin_popcount(S) // __builtin_popcountl(S) __builtin_popcountll(S)
#define MSET(x,y) memset(x,y,sizeof(x))
#define gcd(a,b) __gcd(a,b)
#define all(x)  x.begin(),x.end()
#define isOn(S, j) (S & (1 << j))
#define endl '\n'
#define setBit(S, j) (S |= (1 << j))
#define clearBit(S, j) (S &= ~(1 << j))
#define toggleBit(S, j) (S ^= (1 << j))
#define print(x)    for(auto it:x) cout<<it<<' '; cout<<endl;
#define printii(x)  for(auto it:x) cout<<it.F<<' '<<it.S<<'\t';  cout<<endl;
#define in(x,n)   for(int e=0;e<n;e++){ll y;cin>>y;x.pb(y);}
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define per(i, a, b) for(int i = b-1; i >= a; i--)

#define vi vector<ll>
#define vvi vector<vi>
#define ii pair<ll,ll>
#define pll pair<ll,ll>
#define vii vector<ii>
#define vvii vector<vii>
#define viii vector<pair<ii,ll>>
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define mc(a,b,c) mp(mp(a,b),c)
// #define rep(i, a, b) for(int i = a; i < (b); ++i)
// cout << fixed << setprecision(10)


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n, x, t, m, y, z, k;
	string s;
	ll ans = 0;
	int idx = 0;
	vector<string> list;
	while (cin >> s) {
		idx++;
		list.pb(s);
		if (idx % 3 == 0) {
			map<char, int> a, b, c;
			n = list[0].size();
			for (int i = 0; i < n; i++) {
				a[list[0][i]]++;
			}
			n = list[1].size();
			for (int i = 0; i < n; i++) {
				b[list[1][i]]++;
			}
			n = list[2].size();
			for (int i = 0; i < n; i++) {
				c[list[2][i]]++;
			}
			for (int i = 0; i < 26; i++) {
				if (a['a' + i] && b['a' + i] && c['a' + i]) {
					ans += i + 1;
				}
				if (a['A' + i] && b['A' + i] && c['A' + i]) {
					ans += i + 1 + 26;
				}
			}
			list.clear();
		}
	}
	cout << ans;

	return 0;
}