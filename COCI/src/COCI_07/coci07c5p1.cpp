// 09/22/2020
// https://dmoj.ca/problem/coci07c5p1
#include<bits/stdc++.h>
using namespace std;

int a[3];
int main() {
    for (int i=0;i<3;i++) cin >> a[i];
    if(a[0]+a[1]==a[2])  cout<<a[0]<<"+"<<a[1]<<"="<<a[2]<<"\n";
    else if(a[0]-a[1]==a[2])  cout<<a[0]<<"-"<<a[1]<<"="<<a[2]<<"\n";
    else if(a[0]*a[1]==a[2])  cout<<a[0]<<"*"<<a[1]<<"="<<a[2]<<"\n";
    else if(a[0]/a[1]==a[2])  cout<<a[0]<<"/"<<a[1]<<"="<<a[2]<<"\n";
    else if(a[1]+a[2]==a[0])  cout<<a[0]<<"="<<a[1]<<"+"<<a[2]<<"\n";
    else if(a[1]-a[2]==a[0])  cout<<a[0]<<"="<<a[1]<<"-"<<a[2]<<"\n";
    else if(a[1]*a[2]==a[0])  cout<<a[0]<<"="<<a[1]<<"*"<<a[2]<<"\n";
    else if(a[1]/a[2]==a[0])  cout<<a[0]<<"="<<a[1]<<"/"<<a[2]<<"\n";
}