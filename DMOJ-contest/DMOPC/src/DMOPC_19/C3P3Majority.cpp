// 09/29/2020
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1.5e5+5;

int n, a[mxn], bit[2*mxn]; long long sum;
void update(int idx, int val) {
    idx+=n;
    for (int i=idx;i<=2*n;i+=i&-i) bit[i]+=val;
}
int query(int idx) {
    long long sum = 0; idx+=n;
    for (int i=idx;i>0;i-=i&-i) sum+=bit[i];
    return sum;
}
int main() {
    cin >> n;
    for (int i=1, x;i<=n;i++) {
        cin >> x;
        x%2? a[i]++:a[i]--;
        a[i]+=a[i-1];
    }
    update(0, 1);
    for (int i=1;i<=n;i++) {
        sum+=query(a[i]-1);
        update(a[i], 1);
        // cout << i << " | " << sum << endl;
    }
    cout << sum << "\n";
}