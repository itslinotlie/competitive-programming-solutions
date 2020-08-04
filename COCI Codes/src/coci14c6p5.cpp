// 07/25/2020
// https://dmoj.ca/problem/coci14c6p5
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e3+2;
typedef pair<int, int> pii;

int r, c, arr[mxn][mxn], ans[mxn][mxn], h[mxn], val;
int fun() {
    stack<pii> st;
    st.push({0, 0});
    int val = 0;
    for (int i=1;i<=c;i++) {
        while(!st.empty() && st.top().first>=h[i] && st.size()>=2) {
            int f = st.top().first;
            st.pop();
            val = max(val, (f+1)*(i-st.top().second));
        }
        st.push({h[i], i});
    }
    while(st.size()>=2) {
        int f = st.top().first;
        st.pop();
        val = max(val, (f+1)*(c-st.top().second+1));
    }
    val = max(val, st.top().first);
    return val;
}
int main() {
    cin >> r >> c;
    for (int i=1;i<=r;i++) {
        for (int j=1;j<=c;j++) {
            cin >> arr[i][j];
        }
    }
    for (int i=2;i<=r;i++) {
        for (int j=2;j<=c;j++) {
            if(arr[i][j]+arr[i-1][j-1]<=arr[i-1][j]+arr[i][j-1]) ans[i][j]++;
        }
        for (int j=2;j<=c;j++) {
            ans[i][j]!=0? h[j]++:h[j]=0;
        } val = max(val, fun());
    }
    cout << val << endl;
}