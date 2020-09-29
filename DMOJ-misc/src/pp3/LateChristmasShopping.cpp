// 09/22/2020
// https://dmoj.ca/problem/year2016p1
#include<bits/stdc++.h>
using namespace std;

int n, m, sum, vis[11]; set<int> sett;
int main() {
    cin >> n;
    while(n--) {
        cin >> m; memset(vis, 0, sizeof(vis));
        for (int i=1, x;i<=m;i++) {
            cin >> x; 
            if(!vis[x]) sett.insert(x), vis[x] = x, sum++;
        }
    }
    puts(sum>sett.size()? "YES":"NO");
}