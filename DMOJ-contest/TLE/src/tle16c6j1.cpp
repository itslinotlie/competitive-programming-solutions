// 10/02/2020
// https://dmoj.ca/problem/tle16c6j1
#include<bits/stdc++.h>
using namespace std;

int n, m, a, x, y, z;
int main() {
    scanf("%d%d%d", &n, &m, &a);
    for (int i=1;i<=a;i++) {
        scanf("%d%d", &x, &y);
        if(n<x-z) {printf("The printer melts at %d second(s).\n", x); return 0;}
        if(n-(x-z)+y>m) {printf("The printer jams at %d second(s).\n", x); return 0;}
        n+=-(x-z) + y;
        z = x;
    }
    printf("The printer melts at %d second(s).\n", x+n+1);
}