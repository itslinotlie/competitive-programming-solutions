// 04/04/2020
//https://dmoj.ca/problem/boardgames
package pp7;

import java.util.*;
import java.io.*;

public class BoardGames {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int n, m, MV = (int)1e7;
    static int dis[] = new int[MV+1];
    static boolean vis[] = new boolean[MV+1];
    
    public static void main (String[] args) throws IOException {
        n = readInt(); m = readInt();
        bfs();
        System.out.println(dis[m]);
    }
    static void bfs() {
        Queue<Integer> q = new LinkedList();
        q.add(n); dis[n] = 0; vis[n] = true;
        while(!q.isEmpty()) {
            if (vis[m]) break;
            int cur = q.poll();
            if (3*cur <=MV && !vis[3*cur]) {q.add(3*cur); vis[3*cur]=true; dis[3*cur]=dis[cur]+1;}
            if (cur-1>0 && !vis[cur-1]) {q.add(cur-1); vis[cur-1]=true; dis[cur-1]=dis[cur]+1;}
            if (cur-3>0 && !vis[cur-3]) {q.add(cur-3); vis[cur-3]=true; dis[cur-3]=dis[cur]+1;}
            if (cur%2==0 && !vis[cur/2]) {q.add(cur/2); vis[cur/2]=true; dis[cur/2]=dis[cur]+1;}
        }
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
