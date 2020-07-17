// 07/12/2020
// https://dmoj.ca/problem/champions
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e5+2;

int n, q, a, b, og[mxn], arr[mxn], frd[mxn];
int main() {
    cin >> n >> q;
    for (int i=1;i<=n;i++) {
        cin >> arr[i]; og[i]=arr[i];
    }
    sort(arr+1, arr+n+1);
    for (int i=1;i<=q;i++) {
        cin >> a >> b;
        if (og[a]>og[b]) frd[a]++;
        if (og[b]>og[a]) frd[b]++;
    }
    for (int i=1;i<=n;i++) {
        int* x = lower_bound(arr+1, arr+n+1, og[i]);
        cout << x-arr-frd[i]-1 << " ";
    } cout << endl;
}