// 08/03/2020
// https://dmoj.ca/problem/coci06c1p1
#include<bits/stdc++.h>
using namespace std;

set<int> sett; int x;
int main() {
    for (int i=1;i<=10;i++) {
        scanf("%d", &x);
        sett.insert(x%42);
    }
    printf("%d\n", sett.size());
}