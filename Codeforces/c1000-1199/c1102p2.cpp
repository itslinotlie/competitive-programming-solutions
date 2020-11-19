// 10/12/2020
// https://codeforces.com/contest/1102/problem/B
#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define FOR(i, n) for(int i=1;i<=n;i++)
#define FORE(i, x, n) for(int i=x;i<=n;i++)
#define RFOR(i, n) for(int i=n;i>=1;i--)
#define f first
#define s second

struct kid {int r, x, c;};
bool compA(kid a, kid b){return a.r < b.r;}
bool compB(kid a, kid b){return a.x < b.x;}
int n, k, col, cnt; bool all(false), ans(true);
int main(){
    cin >> n >> k; vector<kid> vec(n);
    for(int i=0;i<n;i++){
        cin >> vec[i].x;
        vec[i].r = i;
        vec[i].c = -1;
    }
    sort(vec.begin(), vec.end(), compB);
    for(int i=0;i<n;i++){
        if(i && vec[i-1].x!=vec[i].x){
            if(cnt>k) {ans = false; break;}
            cnt = 0;
        }
        cnt++;
        vec[i].c = ++col;
        if(col >= k) all = true, col = 0;
    }
    if(!all || cnt>k) ans = false;
    sort(vec.begin(), vec.end(), compA);
    if(ans){
        puts("YES");
        for(int i=0;i<n;i++) cout << vec[i].c << " ";
        cout << "\n";
    }
    else puts("NO");
}
