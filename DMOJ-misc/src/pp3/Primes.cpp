// 09/23/2020
// https://dmoj.ca/problem/primes1
#include<bits/stdc++.h>
using namespace std;
const int MM = 1e5;

int x, i = 2, a[MM];
int main() {
    cin >> x;
    for (int i=2;i<MM;i++) {
        if(!a[i]) {
            for (int j=i*2;j<MM;j+=i) a[j] = 1;
        }
    }
    while(x>0) {
        for(;i<MM;i++) {
            if(!a[i]) {
                cout << i << "\n";
                x--; i++;
                break;
            }
        }
    }
}