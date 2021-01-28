// 09/02/2020
// https://dmoj.ca/problem/ccc96s3
#include<bits/stdc++.h>
using namespace std;

int t, n, k; string s; stack<string> stk;
int main() {
    cin >> t;
    while(t--) {
        cin >> n >> k; s.clear();
        puts("The bit patterns are");
        for (int i=0;i<n;i++) s+=(i<n-k)? "0":"1";
        do {
            stk.push(s);
        } while(next_permutation(s.begin(), s.end()));
        while(stk.size()) {cout<<stk.top()<<"\n"; stk.pop();}
    }
}