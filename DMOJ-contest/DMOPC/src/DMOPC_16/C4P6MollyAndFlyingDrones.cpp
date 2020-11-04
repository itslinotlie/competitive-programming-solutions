// 07/23/2020
// https://dmoj.ca/problem/dmopc16c4p6
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e6;
typedef pair<int, int> pii;

int n, q, l, r, x; long psa[mxn+4]; stack<pii> st;
int main() {
    cin >> n >> q; st.push({0, 0});
    for (int i=1;i<=n;i++) {
        cin >> x; 
        while(x<st.top().first) {
            int val = st.top().first, id = st.top().second;
            st.pop();
            //L-> cur * cur->R
            psa[val]+=(long long) (id-st.top().second)*(i-id);
        }
        st.push({x, i});
    }
    while(st.size()>1) {
        int val = st.top().first, id = st.top().second;
        st.pop();
        psa[val]+=(long long) (id-st.top().second)*(n+1-id);
    }
    //creating psa
    for (int i=1;i<=mxn;i++) psa[i]+=psa[i-1];
    for (int i=1;i<=q;i++) {
        cin >> l >> r;
        cout << (psa[r]-psa[l-1]) << endl;
    }    
}