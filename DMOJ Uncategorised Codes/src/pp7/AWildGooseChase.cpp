// 06/23/2020
// https://dmoj.ca/problem/awildgoosechase
#include<bits/stdc++.h>
using namespace std;

int n, t, psa[100003], arr[100003];
int main() {
    scanf("%d%d", &n, &t);
    for (int i=1,a,b;i<=n;i++) {
        scanf("%d%d", &a, &b);
        if (b==-1) {
            psa[1]++; psa[a]--; psa[a+1]++;
        }
        else arr[b]++;
    }
    for (int i=1;i<=n;i++) psa[i]+=psa[i-1];
    for (int i=1;i<=n;i++) psa[i]+=arr[i];
    bool x = true;
    for (int i=1;i<=n;i++) {
        if (psa[i]==t)
            x = false, cout << i << " ";
    }
    if (x) cout << "-1";
    cout << endl;
}