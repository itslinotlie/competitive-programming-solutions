// 08/02/2020
// https://dmoj.ca/problem/coci13c1p2
#include<bits/stdc++.h>
using namespace std;

int a, b, ans;
int main() {
    scanf("%d %d", &a, &b);
    for (int i=1;i<b;i++) {
        if(i*a%b==0) ans++;
    }
    printf("%d\n", b-1-ans);   
}