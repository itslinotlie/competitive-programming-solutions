// 06/25/2020
// https://dmoj.ca/problem/ccc15j3
#include<bits/stdc++.h>
using namespace std;

char x[31];
int main() {
    scanf("%s", x);
    for (int i=0;i<31;i++) {
        if (x[i]=='\0') continue;
        if (x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u') {cout << x[i]; continue;}
        cout << x[i];
        int a = abs(x[i] - 'a'), e = abs(x[i] - 'e'), ii = abs(x[i] - 'i'), o = abs(x[i] - 'o'), u = abs(x[i] - 'u');
        int MN = min(a, min(e, min(ii, min(o, u))));
        if (MN==a) cout << "a";
        else if(MN==e) cout << "e";
        else if (MN==ii) cout << "i";
        else if (MN==o) cout << "o";
        else cout << "u";
        for (int j=1;j<=26-(x[i]-'a');j++) {
            if (x[i]=='z') {cout << 'z'; break;}
            if (x[i]+j=='a' || x[i]+j=='e' || x[i]+j=='i' || x[i]+j=='o' || x[i]+j=='u') continue;
            cout << (char)(x[i]+j); break;
        }       
    }printf("\n");
}