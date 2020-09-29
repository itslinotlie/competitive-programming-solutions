// 08/31/2020
// https://dmoj.ca/problem/waterloof2017a
#include<bits/stdc++.h>
using namespace std;

int arr[5], cnt;
int main() {
    for (int i=0;i<5;i++) cin >> arr[i];
    for (int a=0;a<5;a++) {
        for (int b=a+1;b<5;b++) {
            for (int c=b+1;c<5;c++) {
                if(arr[a]<arr[b]+arr[c] &&
                arr[b]<arr[a]+arr[c] && 
                arr[c]<arr[a]+arr[b]) cnt++;
            }
        }
    }
    cout << cnt << endl;
}