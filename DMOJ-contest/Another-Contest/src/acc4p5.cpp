// 08/26/2020
// https://dmoj.ca/problem/acc4p5
#include<bits/stdc++.h>
using namespace std;

bool f(int n) {
    if(n==1) return false;
    for (int i=2;i<=sqrt(n);i++) {
        if(n%i==0) return false;
    } return true;
}