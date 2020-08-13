// 04/01/2020
// https://dmoj.ca/problem/dmopc13c3p3
package DMOPC_13;

import java.util.*;
import java.io.*;

public class C3P3CrossingField {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int n, h, a[][], MV = (int)1e7;
    static int m[][] = {{1,0},{0,1},{-1,0},{0,-1}};
    static boolean vis[][];
    public static void main (String[] args) throws IOException {
        n = readInt(); h = readInt();
        a = new int[n+1][n+1]; vis = new boolean[n+1][n+1];
        for (int i=1;i<=n;i++) {
            for (int j=1;j<=n;j++) a[i][j] = readInt();
        }
        bfs(1, 1);
        System.out.println(vis[n][n]? "yes":"no");
    }
    static void bfs(int x, int y) {
        Queue<pt> q = new LinkedList();
        q.add(new pt(x, y));
        vis[y][x] = true;
        while(!q.isEmpty()) {
            if (vis[n][n]) break;
            pt tmp = q.poll(); int cur = a[tmp.y][tmp.x];
            for (int i=0;i<4;i++) {
                int xx = tmp.x+m[i][0], yy = tmp.y+m[i][1];
                if (xx<=0 || xx>n || yy<=0 || yy>n || vis[yy][xx]) continue;
                int rn = a[yy][xx];
                if (Math.abs(cur-rn)<=h) {
                    q.add(new pt(xx, yy));
                    vis[yy][xx] = true;
                }
            }
        }
    }
    static class pt {
        int x, y;
        public pt(int x, int y) {this.x=x;this.y=y;}
    }

    static String next() throws IOException {
        while (st == null || !st.hasMoreTokens())
            st = new StringTokenizer(br.readLine().trim());
        return st.nextToken();
    }
    static String readLine() throws IOException {return br.readLine().trim();}      
    static int readInt() throws IOException {return Integer.parseInt(next());}    
    static long readLong() throws IOException {return Long.parseLong(next());}
    static double readDouble() throws IOException {return Double.parseDouble(next());}
}
