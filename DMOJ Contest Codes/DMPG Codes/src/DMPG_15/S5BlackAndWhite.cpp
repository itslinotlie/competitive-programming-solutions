// 07/02/2020
// https://dmoj.ca/problem/dmpg15s5
#include<bits/stdc++.h>
using namespace std;

int n, m;
short arr[10002][10002];
int main() {
    cin >> n >> m;
    for (int i=1,x,y,w,h;i<=m;i++) {
        scanf("%d%d%d%d", &y, &x, &w, &h);
        x+=1; y+=1;
        arr[x][y]++; arr[x][y+w]--;
        arr[x+h][y]--; arr[x+h][y+w]++;
    }
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            arr[i][j]+=arr[i][j-1];
        }
    }
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            arr[i][j]+=arr[i-1][j];
        }
    }
    int ans = 0;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            if (arr[i][j]%2!=0) ans++;
            arr[i][j]%=2;
        }
    }
    cout << ans << endl;
}