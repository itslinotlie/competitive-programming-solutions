// 10/03/19
// https://dmoj.ca/problem/ccc01s2
package CCC_01;

import java.util.*;
public class S2Spirals {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a[][] = new int [12][12], r=6,c=6, limit = 1, step = 0, turn = 0, d = 0;
        int dir[][] = {{1,0},{0,1},{-1,0},{0,-1}};
        int top = r, bot = r, left = c, rit = c;
        int start = in.nextInt();int end = in.nextInt();
        
        a[r][c] = start;
        for (int i=start+1;i<=end;i++) {
            if (step < limit) {
                r += dir[d][0]; c += dir[d][1];
                a[r][c] = i;
                step ++;
                top = Math.min(top,r); bot = Math.max(bot,r);
                left = Math.min(left,c); rit = Math.max(rit, c);
            } else {
                d = (d+1)%4;
                turn ++; step = 0;
                if (turn==2) {limit++; turn = 0;}
                i--;
            }
        }
        for (int i=top; i<=bot;i++) {
            for (int j=left; j<=rit;j++) {
                if (a[i][j] > 0) System.out.printf("%2d ", a[i][j]);
                else System.out.print("   ");
            }
            System.out.println();
        }
    }
}