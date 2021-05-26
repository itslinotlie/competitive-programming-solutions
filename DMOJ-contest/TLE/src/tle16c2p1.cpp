// 09/02/2020
// https://dmoj.ca/problem/tle16c2p1
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e5 + 5;

int n, x, a[mxn], mx, id; string s;
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> s >> x; a[i]=a[i-1];
        if (s=="borrow") a[i]+=x;
        else a[i]-=x;
        if(a[i]>mx) mx = a[i], id = i;
    }   
    cout<<id<<endl;
}