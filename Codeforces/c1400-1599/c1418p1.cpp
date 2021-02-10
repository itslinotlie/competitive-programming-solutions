// 09/14/2020
// http://codeforces.com/contest/1418/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll t, x, y, k, ans, needY;
int main() {
    cin >> t;
    while(t--) { ans = needY = 0;
        cin >> x >> y >> k; x--;
        ans+=k;
        needY+=y*k;
        ans+=ceil((needY+k-1)/(long double)x);
        cout << ans << "\n";
    }
}