//02/12/20
// https://dmoj.ca/problem/ccc20s2
package CCC_20;

import java.util.*;
import java.io.*;

public class S2 {
    static Stack<pt> q = new Stack();
    static boolean vis[][];
    static int w, h;
    public static void main (String[] args) throws IOException{
        h = readInt(); w = readInt();
        int arr[][] = new int[h][w];
        for (int i=0;i<h;i++) {
            for (int j=0;j<w;j++) {
                arr[i][j] = readInt();
            }
        }
        vis = new boolean[h][w];
        int x = 0, y = 0, nxt = arr[x][y]; getFactor(nxt);
        vis[y][x] = true;
        
        while (!q.isEmpty()) {
            if (vis[h-1][w-1]) break;
            pt tmp = q.pop();
            
            y = tmp.x;
            x = tmp.y;
            if (y<=h && x<=w) {
                if (!vis[y-1][x-1]) {
                    vis[y-1][x-1] = true;
                    nxt = arr[y-1][x-1];
                    getFactor(nxt);
                }
            }
        }
        System.out.println(vis[h-1][w-1]? "yes":"no");
    }
    static void getFactor(int n) {
        for (int i=1;i<=(int)Math.sqrt(n);i++) {
            if (n%i==0) {
                int a = i, b = n/i;
                if (a<=w && b<=h) {
                    if (!vis[b-1][a-1]) q.add(new pt(b, a));
                } 
                if (a<=h && b<=w) {
                    if (!vis[a-1][b-1]) q.add(new pt(a, b));
                }
            }
        }            
    }
    static class pt {
        int x, y;
        pt (int x, int y) {this.x=x;this.y=y;}
    }
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;

    static String next() throws IOException {
        while (st == null || !st.hasMoreTokens())
            st = new StringTokenizer(br.readLine().trim());
        return st.nextToken();
    }
    static String readLine() throws IOException {
        return br.readLine().trim();
    }      
    static int readInt() throws IOException {
        return Integer.parseInt(next());
    }    
    static long readLong() throws IOException {
        return Long.parseLong(next());
    }
    static double readDouble() throws IOException {
        return Double.parseDouble(next());
    }
    static char readCharacter() throws IOException {
        return next().charAt(0);
    }
}

