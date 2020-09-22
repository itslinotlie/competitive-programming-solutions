// 08/30/2020
// https://dmoj.ca/problem/nccc2j4s2
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> vec(3, vector<int>(2));
int main() {
    for (auto &x:vec)  {
        for (auto &y:x) {
            cin >> y;
        }
    }
    for (int x=0;x<3;x++) {
        for (int y=0, b=(x+1)%3, c=(x+2)%3; y<2;y++) {
            for (int z=0;z<2;z++) {
                for (int a=0;a<2;a++) {
                    if (vec[b][z]==vec[c][a] && vec[b][!z]+vec[c][!a]==vec[x][y] && vec[b][z]+vec[x][!y]==vec[x][y])
                        {puts("YES"); return 0;}
                }
            }
        }
    }
    puts("NO");
}