// 08/05/2020
// https://dmoj.ca/problem/btoi07p3
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e6;

int n, m, c, h[mxn+2]; deque<int> mx, mn; bool ans = true;
int main() {
    scanf("%d %d %d", &n, &m, &c);
    for (int i=1;i<=n;i++) scanf("%d", &h[i]);
    for (int l=1,r=1;r<=n;r++) {
        while(l<=r-m) {
            if(mn.front()==h[l]) mn.pop_front();
            if(mx.front()==h[l]) mx.pop_front();
            l++;
        }
        while(!mn.empty() && mn.back()>h[r]) mn.pop_back();
        while(!mx.empty() && mx.back()<h[r]) mx.pop_back();
        mn.push_back(h[r]); mx.push_back(h[r]);
        if(r>=m && mx.front()-mn.front()<=c) {
            printf("%d\n", r-m+1);
            ans = false;
        }
    }
    if(ans) printf("NONE\n");
}