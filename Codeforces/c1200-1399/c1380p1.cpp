// 07/12/2020
// https://codeforces.com/contest/1380/problem/A
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5;
 
int t, n, arr[mxN+2], mx[mxN+2];
pair<int, int> pmn[mxN+2], smn[mxN+2];
int main() {
    cin >> t;
    for (int T=1;T<=t;T++) {
        cin >> n; bool ans = true;
        memset(arr, 0, sizeof(arr)); memset(mx, 0, sizeof(mx));
        memset(pmn, 0x3f, sizeof(pmn)); memset(smn, 0x3f, sizeof(smn));
        for (int i=1;i<=n;i++) {
            cin >> arr[i];
            mx[i] = max(arr[i], mx[i-1]);
            if(pmn[i-1].first>arr[i]) {
                pmn[i].first = arr[i];
                pmn[i].second = i;
            }
            else {
                pmn[i].first = pmn[i-1].first;
                pmn[i].second = pmn[i-1].second;
            }
        }
        for (int i=n;i>=1;i--) {
            if (smn[i+1].first>arr[i]) {
                smn[i].first = arr[i];
                smn[i].second = i;
            }
            else {
                smn[i].first = smn[i+1].first;
                smn[i].second = smn[i+1].second;
            }
        }
        for (int i=2;i<n;i++) {
            if(pmn[i-1].first<arr[i] && arr[i]>smn[i+1].first) {
                cout << "YES" << endl;
                cout << pmn[i-1].second << " " << i << " " << smn[i+1].second << endl; 
                ans = false;
                break;
            }
        }
        if (ans) cout << "NO" << endl;
    }
}