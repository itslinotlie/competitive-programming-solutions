// 02/06/2021
// https://dmoj.ca/problem/ccc18s5
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
const int mxn = 1e5+5;

struct E {int u, v, w; bool f;};
int N, M, P, Q, r[mxn], c[mxn], row, col; vector<E> e; ll tot, mst; 
bool cmp(E x, E y) {return x.w < y.w;}
int fd(int d, int p[]) {
    if(d!=p[d]) p[d] = fd(p[d], p);
    return p[d];
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M >> P >> Q; row = N; col = M;
    for(int i=1, u, v, w;i<=P;i++) {
        cin >> u >> v >> w;
        e.push_back(E{u, v, w, false});
        tot+=1ll*N*w;
    }
    for(int i=1,u,v,w;i<=Q;i++) {
        cin >> u >> v >> w;
        e.push_back(E{u, v, w, true});
        tot+=1ll*M*w;
    }
    sort(e.begin(), e.end(), cmp);
    FOR(i, N) r[i] = i;
    FOR(i, M) c[i] = i;
    for(E x:e) {
        if(x.f) { //vertical edge
            if(row==1) continue;
            int fu = fd(x.u, r), fv = fd(x.v, r);
            if(fu!=fv) {
                r[fu] = fv; row--; mst+=1ll*x.w*col;
            }
        } else { //horizontal edge
            if(col==1) continue;
            int fu = fd(x.u, c), fv = fd(x.v, c);
            if(fu!=fv) {
                c[fu] = fv; col--; mst+=1ll*x.w*row;
            }
        }
        if(row==1 && col==1) break;
    }
    cout << tot - mst << endl;

}