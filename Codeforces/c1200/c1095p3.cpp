// 10/11/2020
// https://codeforces.com/contest/1095/problem/C
#include<bits/stdc++.h>
using namespace std;

int n, k, x; vector<int> vec;
int main() {
    cin >> n >> k;
    x = __builtin_popcount(n);
    for (int i=1<<(int)log2(n);i>0;i=i>>1) {
        if(n&i) vec.push_back(i);
    }
    if(x>k || k>n) puts("NO");
    else {
        while(vec.size()<k) {
            if(vec[0]==1) sort(vec.rbegin(), vec.rend());
            vec.push_back(vec[0]/2);
            vec.push_back(vec[0]/2);
            vec.erase(vec.begin());
        }
        puts("YES");
        for (auto e:vec) cout << e << " "; cout << "\n";
    }
}