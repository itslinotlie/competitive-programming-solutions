// 04/04/2020
//https://dmoj.ca/problem/ccc14s2
package CCC_14;

import java.util.*;
import java.io.*;

public class S2AssigningPartners {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(); 
        Map<String, Integer> map = new HashMap(); List<Integer> adj[] = new ArrayList[n];
        for (int i=0;i<n;i++) adj[i] = new ArrayList();
        for (int i=0;i<n;i++) {
            String tmp = next();
            map.put(tmp, map.size());
        }
        for (int i=0;i<n;i++) {
            String tmp = next();
            for (Map.Entry<String, Integer> e : map.entrySet()) {
                if (e.getKey().equals(tmp)) {
                    adj[i].add(e.getValue());
                    break;
                }
            }
        }
        boolean vis[] = new boolean[n], FLAG = true;
        for (int i=0;i<n && FLAG;i++) {
            if(!vis[i]) {
                vis[i] = true;
                for (int nxt : adj[i]) {
                    vis[nxt] = true;
                    if (adj[nxt].get(0)!=i || nxt==i) FLAG = false;
                }
            }
        }
        System.out.println(FLAG? "good":"bad");
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
