// 08/03/2020
// https://dmoj.ca/problem/dmopc17c4p4
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e6;

int n, id, a[mxn+2], b[mxn+2]; set<int> sett;
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) b[i] = i;
    for (int i=1;i<=n;i++) cin >> a[i], sett.insert(a[i]);
    if(sett.size()==1) cout << "-1" << endl;
    else {
        for (int i=1;i<=n;i++) {
            if(a[i]==b[i]) {
                id = 1;
                while(a[i]==b[id] || a[id]==b[i]) id++;
                b[i]^=b[id];
                b[id]^=b[i];
                b[i]^=b[id];
            }
        }
        for (int i=1;i<=n;i++) {
            cout << b[i] << " ";
        } cout << endl;
    }
}