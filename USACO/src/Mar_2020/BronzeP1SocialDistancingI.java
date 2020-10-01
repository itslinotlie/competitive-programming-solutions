// 04/15/2020
// http://www.usaco.org/index.php?page=viewproblem2&cpid=1035
package Mar_2020;

import java.util.*;
import java.io.*;

public class BronzeP1SocialDistancingI {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt(); String s = readLine();
        int first = s.indexOf("1"), last = s.lastIndexOf("1");
        if (first < 0) {System.out.println(n-1); return;}
        List<Integer> gap = new ArrayList(); 
        int gap2 = Math.max(first/2, (n-1-last)/2), min = n+1;
        gap.add(first); gap.add(n-1-last);
        for (int cur=first, nxt=0; cur<last;cur=nxt) {
            nxt = s.indexOf("1", cur+1);
            gap.add((nxt-cur)/2); 
            gap2 = Math.max(gap2, (nxt-cur)/3);
            min = Math.min(min, nxt-cur);
        }
        Collections.sort(gap);
        System.out.println(Math.min(min, Math.max(gap.get(gap.size()-2), gap2)));
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