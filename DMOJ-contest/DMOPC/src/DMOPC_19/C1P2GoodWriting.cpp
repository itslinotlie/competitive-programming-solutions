// 09/20/2020
// https://dmoj.ca/problem/dmopc19c1p2
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mxn = 31;

ll t, N, K, arr[mxn];
const string s = "Good writing is good writing is good writing.", a = "Good writing is good ", b = " writing is good ", c = " is good writing.";
char fun(int n, int k) {
    if(k>arr[n]) return '.';
    if(n==0) return s[k-1];
    if(k<=a.length()) return a[k-1];
    else if(k<=a.length()+arr[n-1]) return fun(n-1, k-a.length());
    else if(k<=a.length()+arr[n-1]+b.length()) return b[k-a.length()-arr[n-1]-1];
    else if(k<=a.length()+arr[n-1]+b.length()+arr[n-1]) return fun(n-1, k-a.length()-arr[n-1]-b.length());
    return c[k-a.length()-arr[n-1]-b.length()-arr[n-1]-1];
}
int main() {
    arr[0] = s.length();
    for (int i=1;i<mxn;i++) arr[i] = a.length() + arr[i-1] + b.length() + arr[i-1] + c.length();
    cin >> t;
    while(t--) {
        cin >> N >> K;
        cout << fun(N, K) << "\n";
    }
}