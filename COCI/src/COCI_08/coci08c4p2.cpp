// 09/22/2020
// https://dmoj.ca/problem/coci08c4p2
#include<bits/stdc++.h>
using namespace std;

int d, m, cnt, day[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
string s[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
int main() { //Bruce's sub is so much cleaner than mine orz
    cin >> d >> m; cnt = d;
    for(int i=0; i<m-1; i++) cnt+=day[i];
    cout << s[(cnt+2)%7] << "\n";
}