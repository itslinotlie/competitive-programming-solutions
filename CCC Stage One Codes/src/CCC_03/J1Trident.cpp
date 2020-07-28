// 06/26/2020
// https://dmoj.ca/problem/ccc03j1
#include<bits/stdc++.h>
using namespace std;

int t, w, h;
int main() {
    scanf("%d%d%d", &t, &w, &h);
    for (int i=1;i<=t;i++) {
        printf("*");
        for (int j=1;j<=w;j++) printf(" ");
        printf("*");
        for (int j=1;j<=w;j++) printf(" ");
        printf("*"); cout << endl;
    }
    for (int i=1;i<=2*w+3;i++) printf("*"); printf("\n");
    for (int i=1;i<=h;i++) {
        for (int j=1;j<=w+1;j++) printf(" "); printf("*\n");
    }
}