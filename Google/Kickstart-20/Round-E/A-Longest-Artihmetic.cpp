// 08/22/2020
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define f first
#define s second
const int mxn = 2e5 + 5;

int n, a[mxn], b[mxn];
void work() {
    cin >> n;
    memset(a, 0, sizeof(a)); memset(b, 0, sizeof(b));
    for (int i=1;i<=n;i++) {
        cin >> a[i];
        if(i>1) b[i] = a[i]-a[i-1];
    }
    int val = b[2], cnt = 1, mx = 0;
    for (int i=3;i<=n;i++) {
        if(b[i]==val) cnt++;
        else {
            mx = max(mx, cnt);
            val = b[i];
            cnt = 1;
        }
    }
    mx = max(mx, cnt);
    cout <<  mx+1;
}
int main() {
    int T; cin >> T;
    for(int t=1;t<=T;t++) {
        printf("Case #%d: ", t);
        work();
        printf("\n");
    }
}