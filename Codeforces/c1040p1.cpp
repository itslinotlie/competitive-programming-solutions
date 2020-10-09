// 10/05/2020
// https://codeforces.com/contest/1040/problem/A
#include<bits/stdc++.h>
using namespace std;
const int mxn = 22;

int n, a, b, ans, arr[mxn];
bool fun(int x, int y) {
    int sum = (x==2) + (y==2);
    return x==y || sum>=1;
}
int cnt(int x, int y) {
    return (x==2) + (y==2);
}
int main() {
    cin >> n >> a >> b;
    for (int i=1;i<=n;i++) cin >> arr[i];
    for (int i=1;i<=n/2;i++) { //0=white, 1=black, 2=any
        if(fun(arr[i], arr[n-i+1])) {
            if(arr[i]==arr[n-i+1] && arr[i]==2) ans+=2*min(a, b);
            else if(cnt(arr[i], arr[n-i+1])==1) {
                if(arr[i]==0) ans+=a;
                else if(arr[i]==1) ans+=b;
                else if(arr[n-i+1]==0) ans+=a;
                else ans+=b;
            }
        }
        else {
            cout << -1 << endl; return 0;
        }
    }
    if(n%2 && arr[n/2+1]==2) ans+=min(a, b);
    cout << ans << endl;
}