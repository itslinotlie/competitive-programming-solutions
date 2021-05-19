// 09/04/2020
// https://codeforces.com/contest/1409/problem/C
#include<bits/stdc++.h>
using namespace std;
 
int t, n, x, y, d, ans, id; stack<int> stk;
void calc() {
    for (int i=1;i<=sqrt(d);i++) {
        if(d%i==0) {
            stk.push(i); stk.push(d/i);
        }
    }
}
int main() {
    cin >> t;
    while(t--) {
        cin >> n >> x >> y; ans = 0x3f3f3f3f; id = 0x3f3f3f3f;
        if(n==2) {cout << x << " " << y << endl; continue;}
        d = y-x; 
        calc(); 
        while(!stk.empty()) { //n=5
            int val = stk.top(); stk.pop(); //10
            int md = d/val - 1; //2
            int lo = max(0, (x-1)/val); //1
            int mx = max(0, n-md-lo-2), top = y+mx*val;
            if (top<=ans && x+min(n-1, (md+1))*val>=y) {
                ans = top; 
                id = min(id, val);
            }
        }
        cout << x << " " << y << " ";
        n-=2; int lo = x, md = x, hi = y;
        while(n--) {
            if(md+id<y) {cout<<md+id<<" "; md+=id;}
            else if(lo-id>0) {cout << lo-id << " "; lo-=id;}
            else {cout << hi+id << " "; hi+=id; }
        }
        cout << endl;
    }
}