// 06/14/2020
// https://dmoj.ca/problem/dmopc14c5p2
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, MV = -1;
int main() {
    scanf("%d", &n);
    for (int i=1, a, b;i<=n;i++) {
        scanf("%d%d", &a, &b);
        MV = max(MV, b-a);
    }
    cout << MV << "\n";
}