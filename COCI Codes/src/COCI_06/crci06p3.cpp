// 08/22/2020
// https://dmoj.ca/problem/crci06p3
#include<bits/stdc++.h>
using namespace std;
const int mxn = 5e5 + 5;
typedef long long ll;

int n, h; ll psa[mxn];
int main() {
    cin >> n >> h;
    for (int i=1, x;i<=n;i++) {
        cin >> x;
        if(i%2==1) {
            psa[1]++; psa[x+1]--;
        }
        else {
            psa[h-x+1]++; psa[h+1]--;
        }
    }
    int mn = 0x3f3f3f3f, cnt = 0;
    for (int i=1;i<=h;i++) {
        psa[i]+=psa[i-1];
        if(psa[i]<mn) {
            mn = psa[i]; cnt = 1;
        } else if(psa[i]==mn) cnt++;
    }
    cout<<mn<<" "<<cnt<<endl;
}