// 03/24/2020
//https://dmoj.ca/problem/backtrack1
package pp5;

import java.util.*;
import java.io.*;

public class PalindromicIntegerPartition {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int n, bk[];
    static long cnt = 0;
    public static void main (String[] args) throws IOException {
        n = readInt(); bk = new int[n+1];
        bk[0] = 1; for (int i=1;i<=n;i++) bk[i] = bk[i-1]*2;
        if (n==2) {System.out.println("2"); System.exit(0);}
        if (n==3) {System.out.println("2"); System.exit(0);}
        if (n%2==0) {
            Map<Integer, Integer> map = new HashMap();
            map.put(n, 1); int pow = -1;
            for (int i=n-2;i>=1;i--) {
                if (i%2==0) {
                    pow++;
                    cnt+= (long) Math.pow(2, pow);
                    map.put(i, (int)Math.pow(2, pow));
                }
                else {
                    if (2*i>n) continue;
                    for (Map.Entry<Integer, Integer> e : map.entrySet()) {
                        if (e.getKey()==2*i) cnt+=e.getValue();
                    }
                }            
            }
            for (int i=n/2 - 1;i>=2;i--) {
                if(i%2==0) cnt += (int) Math.pow(2, (n-i-i)/2 -1);
            }
            if(n/2%2==0) cnt++; 
            cnt++;
        }
        else {
            int pow = 0;
            for (int i=n-2;i>=1;i-=2) {
                cnt+= (int)Math.pow(2, pow); pow++;
            }
            cnt++;
        }
        System.out.println(cnt);
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
