// 03/25/2020
// https://dmoj.ca/problem/dwite11c2p5
package DWITE_11;

import java.util.*;
import java.io.*;

public class dwite11c2p5 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        for (int T=0;T<5;T++) {
            int n = readInt(), MV = (int)1e5;
            Map<String, Integer> map = new HashMap();
            DS tree = new DS(MV);
            for (int t=0;t<n;t++) {
                String l = next(), a = next(), b = next();
                switch (l) {
                    case "p":
                        if (!map.containsKey(a)) map.put(a, map.size());
                        if (!map.containsKey(b)) map.put(b, map.size());
                        int x = map.get(a), y = map.get(b);
                        tree.union(x, y);
                        break;
                    case "q":
                        if (a.equals(b)) System.out.println("connected");
                        else if (!map.containsKey(a) || !map.containsKey(b)) System.out.println("not connected");
                        else {
                            int xx = map.get(a), yy = map.get(b);
                            System.out.println(tree.find(xx)==tree.find(yy)?"connected":"not connected");
                        }
                        break;
                }
            }
        }
    }
    static class DS {
        int parent[];
        int rank[];
        int n;
        public DS(int n) {
            parent = new int[n];
            rank = new int[n];
            this.n=n;
            makeSet();
        }
        public void makeSet() {
            for (int i=0;i<n;i++) parent[i] = i;
            Arrays.fill(rank, -1);
        }
        public int find(int x) { //path compression
            if (parent[x]!=x) {
                parent[x] = find(parent[x]);
            }
            return parent[x];
        }
        public void union(int x, int y) {
            int rootX = find(x), rootY = find(y);
            
            if (rootX==rootY) return;
            if (rank[rootX]>rank[rootY]) parent[rootY] = rootX;
            else if (rank[rootY]>rank[rootX]) parent[rootX] = rootY;
            else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }     
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