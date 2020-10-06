// 10/01/2020
// https://dmoj.ca/problem/test2017p2
#include<bits/stdc++.h>
using namespace std;

long long n, b, x;
int main() {
    cin >> n >> b;
    for (int i=1;i<=n;i++) {
        cin >> x;
        b-=x;
    }
    b>=0? cout<<b<<"\n":cout<<"The budget will balance itself\n";
}