// 09/26/2020
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define f first
#define s second
const int mxn = 1e5+5;

int n, k; ll x, a[mxn]; bool vis[mxn]; vector<int> vec; set<int> sett;
void work() {
    cin >> n >> x; k = 0;
    vec.clear(); sett.clear();
    memset(a, 0, sizeof(a)); memset(vis, false, sizeof(vis));
    int mn = 0x3f3f3f3f;
    for (int i=1;i<=n;i++) {
        cin >> a[i];
        a[i] = ceil((double)a[i]/x);
        if(sett.find(a[i])==sett.end()) vec.push_back(a[i]);
        sett.insert(a[i]);
    }
    sort(vec.begin(), vec.end());
    while(!vec.empty())  {
        for (int i=1;i<=n;i++) {
            if(a[i]==vec.front()) cout << i << " ";
        }
        vec.erase(vec.begin());
    }
    cout << "\n";
}
int main() {
    cin.sync_with_stdio(0); cin.tie(0);
    int T; cin >> T;
    for(int t=1;t<=T;t++) {
        cout << "Case #" << t << ": ";
        work();
    }
}