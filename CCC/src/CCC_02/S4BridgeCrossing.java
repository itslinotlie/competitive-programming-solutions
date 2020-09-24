// 04/12/2020
// https://dmoj.ca/problem/ccc02s4
package CCC_02;

import java.util.*;
import java.io.*;

public class S4BridgeCrossing {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int L = readInt(), n = readInt(), dp[] = new int[n+1]; pt pt[] = new pt[n+1];
        int MV = (int)1e8; pt[0] = new pt("", 0);
        for (int i=1;i<=n;i++) pt[i] = new pt(readLine(), readInt());
        Arrays.fill(dp, MV); dp[0] = 0;
        
        for (int i=1;i<=n;i++) {
            int idx = Math.max(0, i-L);
            for(int j=idx;j<i;j++) {
                int cur = dp[j], max = 0;
                for(int k=j+1;k<=i;k++) {
                    max = Math.max(max, pt[k].v);
                }
                dp[i] = Math.min(dp[i], cur+max);
            }
        }
        System.out.println("Total Time: "+dp[n]);
        
        Stack<String> s = new Stack();
        for(int i=n;i>=1;i--) {
            int idx = Math.max(0, i-L);
            boolean FLAG = true;
            int max = pt[i].v;
            for (int j=i-1;j>idx;j--) {
                max = Math.max(max, pt[j].v);
                if(dp[i]-max==dp[j-1]) {
                    String tmp = "";
                    for(int k=j;k<=i;k++) tmp+= pt[k].n+" ";
                    FLAG = false; i-=(i-j);
                    s.add(tmp.substring(0, tmp.length()-1));
                }   
            }
            if (FLAG) s.add(pt[i].n);
        }
        while(!s.isEmpty()) System.out.println(s.pop());    
    }
    static class pt {
        String n;
        int v;
        public pt(String n, int v) {this.n=n;this.v=v;}
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