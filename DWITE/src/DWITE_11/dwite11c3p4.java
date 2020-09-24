// 06/06/2020
// https://dmoj.ca/problem/dwite11c3p4
package DWITE_11;

import java.util.*;
import java.io.*;

public class dwite11c3p4 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st; 
    static int r, c, m[][] = {{1,0},{-1,0},{0,1},{0,-1}};
    static int ay, ax, by, bx, cy, cx, ans;
    static char g[][];
    public static void main (String[] args) throws IOException {
        for (int t=0;t<5;t++) {
            r = readInt(); c = readInt(); g = new char[r+1][c+1]; ans = 0;
            for (int i=1;i<=r;i++) {
                String x = readLine();
                for (int j=1;j<=c;j++) {
                    g[i][j] = x.charAt(j-1);
                    if (g[i][j]=='A') {ay=i;ax=j;}
                    else if (g[i][j]=='B') {by=i;bx=j;}
                    else if (g[i][j]=='C') {cy=i;cx=j;}
                }
            }   
            bfs(ay, ax, 1);
        }
    }
    static void bfs(int y, int x, int k) {
        Queue<pair> q = new LinkedList();
        int dis[][] = new int[r+1][c+1]; boolean vis[][] = new boolean[r+1][c+1];
        q.add(new pair(y, x)); dis[y][x] = 0; vis[y][x] = true;
        while(!q.isEmpty()) {
            pair tmp = q.poll();
            for (int i=0;i<4;i++) {
                int yy = tmp.y+m[i][0], xx = tmp.x+m[i][1];
                if (yy<=0 || yy>r || xx<=0 || xx>c || vis[yy][xx] || g[yy][xx]=='#') continue;
                q.add(new pair(yy, xx)); vis[yy][xx] = true; dis[yy][xx] = dis[tmp.y][tmp.x] + 1;
                if (check(yy, xx, k)) {
                    ans+=dis[yy][xx];
                    switch(k) {
                        case 1:
                            bfs(by, bx, 2); return;
                        case 2:
                            bfs(cy, cx, 3); return;
                        case 3:
                            System.out.println(ans); return;
                    }
                }
            }
        }
    }
    static boolean check(int y, int x, int k) {
        switch(k) {
            case 1:
                if (y==by && x==bx) return true;
                break;
            case 2:
                if (y==cy && x==cx) return true;
                break;
            case 3:    
                if (y==ay && x==ax) return true;
                break;   
        }
        return false;
    }
    static class pair {
        int y, x;
        public pair(int y, int x) {this.y=y;this.x=x;}
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