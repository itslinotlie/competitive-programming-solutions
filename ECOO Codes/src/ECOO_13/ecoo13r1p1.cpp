// 07/11/2020
// https://dmoj.ca/problem/ecoo13r1p1
#include<bits/stdc++.h>
using namespace std;

int n, bef, aft; string x;
int main() {
    cin >> n >> x;
    while(x!="EOF") {
        if (x=="TAKE") {
            n++; bef++;
            if (n==1000) n = 1;
        }
        else if (x=="SERVE") aft++;
        else {
            printf("%d %d %d\n", bef, abs(bef-aft), n);
            bef = 0; aft = 0;
        }  
        cin >> x;
    }
}