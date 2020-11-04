// 08/22/2020
#include<bits/stdc++.h>
using namespace std;

int b, p; char x;
int main() {
    scanf("%d\n%d\n%c", &b, &p, &x);
    if(5*p<=b) printf("%s\n", x=='Y'?"B":"A");
    else if(2*p<=b) printf("%s\n", x=='Y'?"D":"C");
    else printf("NO PIZZA\n");
}