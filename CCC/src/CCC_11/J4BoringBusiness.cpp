// 06/25/2020
// https://dmoj.ca/problem/ccc11j4
#include<bits/stdc++.h>
using namespace std;

bool g[201][601]; //401 is needed, 601 gives buffer space
char p; int d, y = 5, x = 300, y2, x2;
int main() {
    //y becomes flipped, x + 301
    for (int i=0;i<3;i++) g[5+i][300] = true; //down
    for (int i=1;i<=8;i++) g[7][300+i] = true; //right
    for (int i=1;i<=4;i++) g[7-i][308] = true; //up
    for (int i=1;i<=2;i++) g[3][308-i] = true; //left
    for (int i=1;i<=2;i++) g[3+i][306] = true; //down
    for (int i=1;i<=2;i++) g[5][306-i] = true; //left
    for (int i=1;i<=2;i++) g[5-i][304] = true; //up
    for (int i=1;i<=3;i++) g[3][304-i] = true; //left
    for (int i=1;i<=2;i++) g[3-i][301] = true; //up
    cin >> p >> d;
    while(p!='q') {
        if (p=='d') {
            y2 = y+d; x2 = x;
            for (int i=1;i<=d;i++) {
                if (g[y+i][x]) {printf("%d %d DANGER\n", x2-301, -y2); return 0;}
                g[y+i][x] = true;
            }
        }
        else if (p=='u') {
            y2 = y-d; x2 = x;
            for (int i=1;i<=d;i++) {
                if (g[y-i][x]) {printf("%d %d DANGER\n", x2-301, -y2); return 0;}
                g[y-i][x] = true;
            }
        }
        else if (p=='l') {
            y2 = y; x2 = x-d;
            for (int i=1;i<=d;i++) {
                if (g[y][x-i]) {printf("%d %d DANGER\n", x2-301, -y2); return 0;}
                g[y][x-i] = true;
            }
        }
        else if (p=='r') {
            y2 = y; x2 = x+d;
            for (int i=1;i<=d;i++) {
                if (g[y][x+i]) {printf("%d %d DANGER\n", x2-301, -y2); return 0;}
                g[y][x+i] = true;
            }
        }
        else if (p=='q') {
            return 0;
        }
        printf("%d %d safe\n", x2-301, -y2);
        y = y2; x = x2;
        cin >> p >> d;
    }
}
