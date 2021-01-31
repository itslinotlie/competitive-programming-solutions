// 06/28/2020
// https://dmoj.ca/problem/cco99p2
#include<bits/stdc++.h>
using namespace std;

int t, n, w;
string fun(int x) {
    if ((x%100<20 && x%100>10) || x>1000) return to_string(x)+"th";
    int tmp = x%10;
    if (tmp==1) return to_string(x)+"st";
    if (tmp==2) return to_string(x)+"nd";
    if (tmp==3) return to_string(x)+"rd";
    return to_string(x)+"th";
}
int main() {
    cin >> t;
    for (int T=t;T>0;T--) {
        cin >> n >> w;
        unordered_map<string, int> umap;
        for (int i=0;i<n;i++) {
            string x; cin >> x;
            umap[x]++;
        }
        vector<pair<string, int>> vec;
        copy(umap.begin(), umap.end(), back_inserter(vec));
        sort(vec.begin(), vec.end(), [](const pair<string, int>& l, const pair<string, int>& r) {
            if (l.second!=r.second) {
                return l.second > r.second;
            } return l.first > r.first;
        });
        int cur = 0, pst = 0x3f3f3f3f, amt = 0, val = 0;
        int MV = 0, idx = 0;
        set<int> sett;
        for (auto x : vec) {
            MV++;
        } 
        cout << fun(w) << " most common word(s):" << endl;
        for (int i=0;i<MV;i++) {
            cur = vec.at(i).second;
            if (cur!=pst) {pst = cur; amt++; val+=amt; amt = 0;}
            else {amt++;}
            if (val==w) {idx = vec.at(i).second; break;}
        }
        for (int i=0;i<MV;i++) {
            if (vec.at(i).second==idx) 
                cout << vec.at(i).first << endl;
        } 
        if (T!=1) cout << endl;
    }
}