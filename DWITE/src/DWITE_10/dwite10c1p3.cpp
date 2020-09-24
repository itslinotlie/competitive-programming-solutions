// 08/19/2020
// https://dmoj.ca/problem/dwite10c1p3
#include<bits/stdc++.h>
using namespace std;

int r, c, t=5;
int fun(int y, int x) {
    if(x==0 || y==0) return 0;
    int sum = 0;
    if(y%2==1) sum+=x, y--;
    if(x%2==1) sum+=y, x--;
    return sum + fun(y/2, x/2);
}
int main() {
    while(t--) {
        scanf("%d%d", &r, &c);
        printf("%d\n", fun(r, c));
    }
}