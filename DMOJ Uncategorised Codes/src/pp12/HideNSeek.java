// 04/04/2020
// https://dmoj.ca/problem/gfssoc1s3
package pp12;

import java.util.*;
import java.io.*;

public class HideNSeek {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int r, c, t, x1, y1, idx=1, ans = Integer.MAX_VALUE;
    static pt bk[];
    static char g[][], temp[];
    static boolean vis[][];
    static int dis[][], m[][] = {{1,0},{-1,0},{0,1},{0,-1}};
    public static void main (String[] args) throws IOException {
        r = readInt(); c = readInt(); t = readInt(); bk = new pt[t+1];
        g = new char[r+1][c+1]; vis = new boolean[r+1][c+1]; dis = new int[r+1][c+1];
        temp = new char[t]; 
        for (int i=0;i<t;i++) {
            String tmp = Integer.toString(i+1);
            temp[i] = tmp.charAt(0);
        }
        for (int i=1;i<=r;i++) {
            String tmp = readLine();
            for (int j=1;j<=c;j++) {
                g[i][j] = tmp.charAt(j-1);
                if(g[i][j]=='H') {bk[idx] = new pt(i, j); idx++;}
                if(g[i][j]=='G') {y1=i;x1=j;}
            }
        }
        //Permutation for BFS of T -> find the min
        for (int i=0;i<temp.length;i++) {
            fun (i, temp[i]+"");
        }
        System.out.println(ans);
    }
    static int doBFS(int y0, int x0, int y2, int x2) {
        for (int i=1;i<=r;i++) {
            Arrays.fill(dis[i], 0); Arrays.fill(vis[i], false);
        }
        Queue<pt> q = new LinkedList();
        q.add(new pt(y0, x0)); vis[y0][x0] = true; dis[y0][x0] = 0;
        while(!q.isEmpty()) { //go from (y0,x0) -> (y2,x2)
            if(vis[y2][x2]) break;
            pt tmp = q.poll();
            for (int i=0;i<4;i++) {
                int yy = tmp.y+m[i][0], xx = tmp.x+m[i][1];
                if (yy<=0 || yy>r || xx<=0 || xx>c || vis[yy][xx] || g[yy][xx]=='X') continue;
                q.add(new pt(yy, xx)); vis[yy][xx] = true; dis[yy][xx] = dis[tmp.y][tmp.x]+1;
            }
        }
        return dis[y2][x2];
    }
    static void bfs(String order) {
        int sum = 0, x0 = x1, y0 = y1;
        for (int i=0;i<order.length();i++) {
            int val = Integer.parseInt(Character.toString(order.charAt(i)));
            int y2 = bk[val].y, x2 = bk[val].x;
            sum+=doBFS(y0,x0,y2,x2);
//            System.out.print(sum+" ");
            x0=x2;y0=y2;
        }
//        System.out.println("\n");
        ans = Math.min(ans, sum);
    }
    static void fun(int i, String ans) {
        if (ans.length()==t) {
//            System.out.println(ans);
            bfs(ans);
        }
        else {
           for (int j=0;j<t;j++) {
                if (!ans.contains(Character.toString(temp[j]))) fun (j, ans+temp[j]);
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
