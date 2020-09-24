// 08/10/2020
// https://dmoj.ca/problem/dmopc17c5p2
#include<bits/stdc++.h>
using namespace std;
const int mxn = 2e5 + 5;

string s; int q, x, y, z, len, ans, psa[2][mxn];
int main() {
    getline(cin, s); len = s.size();
    for (int i=1;i<=len;i++) {
        s[i-1]=='0'? psa[0][i]++:psa[1][i]++;
        psa[0][i]+=psa[0][i-1]; psa[1][i]+=psa[1][i-1];
    }
    scanf("%d", &q);
    for (int i=1;i<=q;i++) {
        scanf("%d%d%d", &x, &y, &z);
        ans = lower_bound(psa[z]+x, psa[z]+len+1, y+psa[z][x-1]) - psa[z];
        printf("%d\n", ans==len+1? -1:ans);
    }
}