// 10/08/2020
// https://codeforces.com/contest/653/problem/B
#include<bits/stdc++.h>
using namespace std;
const int mxn = 6, MM = 36;
typedef pair<string, string> pii;

int n, q, ans; string a, b; pii s[MM];
void fun(string x, int tot) {
    if(tot==n) {
        while(true) {
            if(x.length()==1 && x[0]=='a') {ans++; return;}
            bool out = true;
            for (int i=0;i<q;i++) {
                if(x.substr(0, 2)==s[i].first) {
                    x = s[i].second + x.substr(2, x.length()-2);
                    out = false;
                }
            }
            if(out) return;
        }
        return;
    }
    for (char i='a';i<'g';i++) {
        fun(x+i, tot+1);
    }
}
int main() {
    cin >> n >> q;
    for (int i=0;i<q;i++) {
        cin >> a >> b;
        s[i] = {a, b};
    }
    for (char i='a';i<'g';i++) {
        string something(1, i);
        fun(something, 1);
    }
    cout << ans << "\n";
}