// 07/06/2020
// https://dmoj.ca/problem/dwite07c5p2
#include<bits/stdc++.h>
using namespace std;

int x;
bool prime(int tmp) {
    for (int i=2;i<=sqrt(x);i++) {
        if(tmp%i==0) return false;
    } return true;
}
int f(int tmp) {
    int sum = 0;
    for (int i=2;i<x;i++) {
        while(tmp%i==0 && tmp!=1) {
            tmp/=i; sum++;
        }
    }
    return sum;
}
int main() {
    for (int t=1;t<=5;t++) {
        cin >> x;
        if (prime(x)) cout << 0 << endl;
        else cout << f(x) << endl;
    }
}