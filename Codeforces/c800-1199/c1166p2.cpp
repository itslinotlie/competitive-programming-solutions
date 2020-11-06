// 10/15/2020
// https://codeforces.com/contest/1166/problem/B
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define CLR(a) memset(a, 0, sizeof(a))
#define REP(i, n) for(int i=0;i<n;i++)
#define FOR(i, n) for(int i=1;i<=n;i++)
#define FORE(i, x, n) for(int i=x;i<=n;i++)
#define RFOR(i, n) for(int i=n;i>=1;i--)
#define f first
#define s second
const int mxn = 1e4+4;

int k, cnt(-1); char c[] = {'a', 'e', 'i', 'o', 'u'};
int main() {
    cin >> k;
    for (int i=5;i<=k;i++) {
        if(k%i==0 && (k/i)>=5) {
            for(int x=0;x<i;x++) {
                for (int y=0,z=x;y<k/i;y++) {
                    cout << c[(++z)%5];
                }
            } cout << endl;
            return 0;
        }
    } 
    puts("-1");
}