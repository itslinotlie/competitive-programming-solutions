// 11/13/2020
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define all(c) (c).begin(), (c).end()
#define F first
#define S second

int n, k, s;
void work() {
    cin >> n >> k >> s;
    cout << k + min(k-s + n-s, n) << "\n";
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int T; cin >> T;
    for(int t=1;t<=T;t++) {
        cout << "Case #" << t << ": ";
        work();
    }
}