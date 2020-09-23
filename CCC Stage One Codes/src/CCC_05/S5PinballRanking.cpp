// 09/16/2020
// https://dmoj.ca/problem/ccc05s5
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e5+5;

int n, a[mxn], b[mxn]; long long bit[mxn], ans; map<int, int> mp;
void update(int idx, int val) {
    for (int i=idx;i<mxn;i+=i&-i) {
        bit[i]+=val;
    }
}
long long query(int idx) {
    long long sum = 0;
    for (int i=idx;i>0;i-=i&-i) {
        sum+=bit[i];
    }
    return sum;
}
int main() {
    scanf("%d", &n);
    for (int i=1;i<=n;i++) scanf("%d", &a[i]), b[i]=a[i];
    sort(a+1,a+1+n); reverse(a+1, a+1+n);
    for (int i=1;i<=n;i++) mp[a[i]] = i;
    for (int i=1;i<=n;i++) {
        int id = mp[b[i]];
        long long cur = query(id-1);
        ans+=cur+1;
        update(id, 1);
    }
    printf("%.2f\n", (double)ans/n);
}