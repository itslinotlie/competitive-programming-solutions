// 10/13/2020
// https://dmoj.ca/problem/cco12p1
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int w, d, q, t, x; bool oz; vector<int> vec;
bool fun(int sum, int idx) {
    if(oz && sum==x) return true;
    if(idx>1) {
        for(int i=0;i<d;i++) {
            if(fun(sum+vec[i], idx-1) || fun(sum*vec[i], idx-1)) return true;
        }
        return false;
    } else {
        for (int i=0;i<d;i++) {
            if(sum*vec[i]==x || sum+vec[i]==x) return true;
        }
        return false;
    }
}
int main() {
    cin >> w >> d; vec.resize(d);
    for (auto &x:vec) {cin >> x; if(x<2) oz=1;}
    cin >> q;
    for (int i=1;i<=q;i++) {
        cin >> x; bool b(0);
        for (int j=0;j<d;j++) {
            if(fun(vec[j], w)) {b=1; break;};
        }
        puts(b? "Y":"N");
    }
    return 0;
}