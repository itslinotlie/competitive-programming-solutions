// 09/01/2020
// https://dmoj.ca/problem/dwite07c5p1
#include<bits/stdc++.h>
using namespace std;

int x;
string t = " ~.~ ", m = "`   `", b = " \\./ ";
int main() {
    for (int i=1;i<=5;i++) {
        cin >> x;
        for (int j=0;j<x;j++) cout << t; cout<<endl;
        for (int j=0;j<x;j++) cout << m; cout<<endl;
        for (int j=0;j<x;j++) cout << b; cout<<endl;
    }   
}