// 07/20/2020
// https://dmoj.ca/problem/mwc15c2p2
#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int n, x, w; stack<pii> st;
int main() {
    //decrasing stack
    scanf("%d%d", &n, &x); st.push({x, 0}); printf("%d ", 0);
    for (int i=2;i<=n;i++) {
        scanf("%d", &x); w = 1;
        if(st.top().first>x) {printf("%d ", 1); st.push({x, 1}); continue;}
        while(!st.empty() && st.top().first<=x) {w+=st.top().second; st.pop();}
        printf("%d ", w);
        st.push({x, w});
    } printf("\n");
}