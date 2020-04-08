// 04/04/2020
//https://dmoj.ca/problem/ppwindsor18p6
package pp7;

import java.util.*;
import java.io.*;

public class InterNAV {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int r, c, y1, x1, m[][] = {{1,0},{-1,0},{0,1},{0,-1}};
    static char g[][];
    static boolean vis[][];
    static List<Character> bk = new ArrayList();
    public static void main (String[] args) throws IOException {
        c = readInt(); r = readInt();
        g = new char[r+1][c+1]; vis = new boolean[r+1][c+1];
        for (int i=1;i<=r;i++) {
            String tmp = readLine();
            for (int j=1;j<=c;j++) {
                g[i][j] = tmp.charAt(j-1);
                if (g[i][j]=='1') {y1=i;x1=j;}
            }
        }
        bfs(y1, x1);
        bk.add('1'); Collections.sort(bk);
        Iterator itr = bk.iterator();
        while(itr.hasNext()) System.out.print(itr.next()+" ");
    }
    static void bfs(int y1, int x1) {
        Queue<pt> q = new LinkedList();
        q.add(new pt(y1, x1));
        vis[y1][x1] = true;
        while(!q.isEmpty()) {
            pt tmp = q.poll();
            for (int i=0;i<4;i++) {
                int yy = tmp.y+m[i][0], xx = tmp.x+m[i][1];
                if (yy<=0 || yy>r || xx<=0 || xx>c || vis[yy][xx] || g[yy][xx]=='#') continue;
                q.add(new pt(yy, xx)); vis[yy][xx] = true;
                if (g[yy][xx]>='1' && g[yy][xx]<='9') bk.add(g[yy][xx]);
            }
        }
    }
    static class pt {
        int y, x;
        public pt(int y, int x) {this.y=y;this.x=x;}
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
