// 07/06/2020
// https://dmoj.ca/problem/dmopc16c4p2
#include<bits/stdc++.h>
using namespace std;
const int mx = (int)1e5;
typedef pair<pair<int, int>, int> pii;

int n, st, nd, val, k, ans;
pii a[mx+2]; int arr[mx+2];
bool bs(pair<int, int> pi) {
    int key = pi.first;
    int low = 1, hgh = k;
    while(low<hgh) {
        int mid = low + (hgh-low)/2;
        if (key<=arr[mid]) {
            hgh = mid;
        } else {
            low = mid+1;
        }
    }
    if (pi.first<=arr[low] && arr[low]<=pi.second) return false;
    return true;
}
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> st >> nd >> val;
        a[i] = {{st, nd}, val};
    }
    cin >> k;
    for (int i=1;i<=k;i++) {
        cin >> arr[i];
    } 
    sort(arr+1, arr+k+1);
    for (int i=1;i<=n;i++) {
        bool x = bs(make_pair(a[i].first.first, a[i].first.second));
        if (x) ans+=a[i].second;
    }
    cout << ans << endl;
}