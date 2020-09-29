// 09/02/2020
// https://dmoj.ca/problem/gfssoc3j3
#include<bits/stdc++.h>
using namespace std;
const int mxn = 22;
typedef pair<long double, string> pii;

int p, t; pii a[mxn], b[mxn]; string s; long double x;
int main() {
    cin >> p >> t; 
    for (int i=1;i<=p;i++) {
        cin.ignore();
        getline(cin, s); cin >> x;
        a[i] = {x, s};
    }
    for (int i=1;i<=t;i++) {
        cin.ignore();
        getline(cin, s); cin >> x;
        b[i] = {x, s};
    }
    sort(a+1, a+1+p); sort(b+1, b+1+t);
    for (int i=1;i<=t;i++) {
        cout << b[i].second << " will get a " << a[i].second << endl;
    }
}