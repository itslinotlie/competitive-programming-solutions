// 06/26/2020
// https://dmoj.ca/problem/ccc01j2
#include<bits/stdc++.h>
using namespace std;

int x, m;
int main() {
    cin >> x >> m;
    for (int i=1;i<m;i++) {
        if (x*i%m==1.0) {
            printf("%d\n", i); return 0;
        }
    }
    printf("No such integer exists.\n");
}