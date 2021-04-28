// 07/23/2020
// https://dmoj.ca/problem/coi06p1
#include<bits/stdc++.h>
using namespace std;
typedef pair<long, long> pii;

int n; long x, w, ans; stack<pii> st;
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> x; w = 0;
        while(!st.empty() && st.top().first<x) {
            ans+=st.top().second;
            st.pop();
        }
        while(!st.empty() && st.top().first==x) {
            w = st.top().second;
            ans += st.top().second;
            st.pop();
        }
        if(!st.empty()) ans++;
        st.push({x, w+1});
    }
    cout << ans << endl;
}