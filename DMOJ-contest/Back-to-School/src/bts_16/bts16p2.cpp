// 08/02/2020
// https://dmoj.ca/problem/bts16p2
#include<bits/stdc++.h>
using namespace std;

int arr[2], q, t; string s;
int main() {
    map<string,int> mp;
    mp["true"] = 1;
    scanf("%i", &q);
    while (q--) {
        scanf("%i", &t);
        if (t!=4) cin >> s;
        if (t==1) {
            printf("%s\n", arr[mp[s]]?"false":"true");
            arr[mp[s]] = 1;
        }
        else if (t==2) {
            printf("%s\n", arr[mp[s]]?"true":"false");
            arr[mp[s]] = 0;
        }
        else if (t==3) {
            if (!mp[s]) printf("%s\n", !arr[mp[s]]?"-1":"0");
            else {
                if (!arr[mp[s]]) printf("-1\n");
                else if (arr[!mp[s]]) printf("1\n");
                else printf("0\n");
            }
        }
        else {
            if (arr[0]) printf("false ");
            if (arr[1]) printf("true");
            printf("\n");
        }
    }
}
