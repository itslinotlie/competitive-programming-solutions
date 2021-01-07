// 08/08/2020
// https://dmoj.ca/problem/ccc20s3
#include<bits/stdc++.h>
using namespace std;
const int mv = 2e5+5, seed = 131;
typedef long long ll;

string s, t; int fs[26], ft[26]; ll hsh[mv], p[mv]={1}; unordered_set<ll> st;
bool check(int fs[], int ft[]) {
    for (int i=0;i<26;i++) {
        if(fs[i]!=ft[i]) return false;
    } return true;
}
ll substrHash(int l, int r) {
    return hsh[r] - hsh[l-1]*p[r-l+1];
}
int main() {
    cin >> s >> t; 
    for(int i=0;i<s.size();i++) fs[s[i]-'a']++;
    for (int i=1;i<=t.size();i++) {
        hsh[i] = hsh[i-1]*seed + t[i-1];
        p[i] = p[i-1]*seed;
    }
    for (int i=1;i<=t.size();i++) {
        ft[t[i-1]-'a']++;
        if(i>s.size()) ft[t[i-s.size()-1]-'a']--;
        if(check(fs, ft))  {
            st.insert(substrHash(i-s.size()+1, i));
        }
    }
    cout << st.size() << endl;
}