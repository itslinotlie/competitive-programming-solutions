// 05/08/19
// https://dmoj.ca/problem/ceoi17p2
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define F first
#define S second
inline ll gcd(ll a, ll b) {return b==0? a:gcd(b, a%b);}
inline ll lcm(ll a, ll b) {return a*b/gcd(a, b);}
const int mxn = 1e5+5;

int n; double a[mxn], b[mxn];
int main() {
	cin >> n;
	REP(i, n) {
		cin >> a[i] >> b[i];
		a[i]--; b[i]--;
	}
	sort(a,a+n); reverse(a,a+n);
	sort(b,b+n); reverse(b,b+n);

	int i =  0, j = 0;
	double ans = 0, sa = 0, sb = 0;
	while(i<n) {
		sa+=a[i++];
		while(j<n && min(sa-j, sb-i)<min(sa-(j+1), sb+b[j]-i)) sb+=b[j++];
		ans = max(ans, min(sa-j, sb-i));
	}
	cout << setprecision(4) << fixed << ans << "\n";
}