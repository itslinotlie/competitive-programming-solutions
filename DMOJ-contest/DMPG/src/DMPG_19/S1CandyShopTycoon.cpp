// 06/24/2020
// https://dmoj.ca/problem/dmpg19s1
#include<bits/stdc++.h>
using namespace std;

int a, b, c, x;
int main() {
    cin >> a >> b >> c >> x;
    for (int w=0;w<=100;w++) {
        for (int y=0;y<=100;y++) {
            for (int z=0;z<=100;z++) {
                if(w*a+y*b+z*c==x) {
                    printf( "QUEST CLEARED\n"); return 0;
                }
            }
        }
    }
    printf("TRY AGAIN\n");
}