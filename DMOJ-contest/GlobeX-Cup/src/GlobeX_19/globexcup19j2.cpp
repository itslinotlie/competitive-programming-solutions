// 10/03/2020
// https://dmoj.ca/problem/globexcup19j2
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m, a, b; ll ans, arr[6][10];
void fun(int i, ll sum, int left) {
    if(left<0) return;
    if(i==6) {ans = max(ans, sum); return;}
    for (int j=0;j<10;j++) {
        fun(i+1, sum+arr[i][j], left-j);
    }
}
int main() {
    scanf("%d%d%d%d", &n, &m, &a, &b);
    for (int i=0;i<6;i++) {
        for (int j=0;j<10;j++) {
            scanf("%lld", &arr[i][j]);
        }
    }
    fun(0, 0, min(n/a, m/b));
    printf("%lld\n", ans);
}