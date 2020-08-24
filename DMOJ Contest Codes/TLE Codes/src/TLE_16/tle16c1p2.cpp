// 08/24/2020
// https://dmoj.ca/problem/tle16c1p2
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e3+5, MM = 1e5+5;

int n, a[mxn], frq[MM]; vector<int> vec; double sum, val, mode;
int main() {
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        scanf("%d", &a[i]);
        frq[a[i]]++;
        sum+=a[i];
    } sum/=n;
    mode = 0;
    for (int i=0;i<=MM;i++) {
        if(frq[i]>mode) {
            mode = frq[i];
            vec.clear();
            vec.push_back(i);
        }
        else if(frq[i]==mode) vec.push_back(i);
    }
    for(auto x:vec) val+=x; val/=vec.size();
    sort(a, a+n);
    int x = (mode==1? 0x3f3f3f3f:upper_bound(a, a+n, val)-a); //mode
    int y = upper_bound(a, a+n, (n%2==0)? (a[n/2]+a[n/2-1])/2:a[n/2])-a; //median
    int z = upper_bound(a, a+n, sum)-a; //mean
    cout<<min(x, min(y, z))<<"\n";
}