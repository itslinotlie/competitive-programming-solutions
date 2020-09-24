// 08/05/2020
#include<bits/stdc++.h>
using namespace std;

int a[5+1];
bool sorted() {
    for (int i=1;i<=5;i++) if(a[i]!=i) return false;
    return true;
}
void print() {
    for (int i=1;i<=5;i++) printf("%d ", a[i]);
    printf("\n");
}
int main() {
    for (int i=1;i<=5;i++) scanf("%d", &a[i]);
    while(!sorted()) {
        for (int i=1;i<=4;i++) {
            if(a[i]>a[i+1]) {
                a[i]^=a[i+1];
                a[i+1]^=a[i];
                a[i]^=a[i+1];
                print();
            }
        }
    }
}