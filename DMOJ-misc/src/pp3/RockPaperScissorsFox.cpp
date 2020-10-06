// 09/09/2020
// https://dmoj.ca/problem/acmtryouts1a
#include<bits/stdc++.h>
using namespace std;

int n; string s;
int main() {
    cin >> n;
    while(n--) {
        cin >> s;
        if(s=="Foxen") return 0;
        if(s=="Scissors") puts("Rock"); 
        else if(s=="Paper") puts("Scissors");
        else if(s=="Rock") puts("Paper");
        else if(s=="Fox") puts("Foxen");
    }    
}