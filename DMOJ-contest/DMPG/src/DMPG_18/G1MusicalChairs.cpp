// 07/05/2020
// https://dmoj.ca/problem/dmpg18g1
#include<bits/stdc++.h>
using namespace std;
const int MX = (int)1e6;

int n, k, x, stud[MX+2]; bool chair[MX+2]; stack<int> stk; 
int main() {
    cin >> n >> k; memset(stud, -1, sizeof(stud));
    for (int i=1;i<=k;i++) {
        cin >> x; chair[x] = true;
    }
    for (int i=1;i<=k+1;i++) {
        cin >> x; stud[x] = i;
    }
    for (int T=1;T<=2;T++) {
        for (int i=1;i<=n;i++) {
            if (chair[i] && stud[i]>0) {
                chair[i] = false; stud[i] = -1;
            }
            else if (chair[i]) {
                if (stk.empty()) continue;
                chair[i] = false; stk.pop();
            }
            else {
                if (stud[i]==-1) continue;
                stk.push(stud[i]); stud[i] = -1;
            }
        }
    }
    cout << stk.top() << endl;
}