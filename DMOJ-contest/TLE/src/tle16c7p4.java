// 05/22/2020
// https://dmoj.ca/problem/tle16c7p4

import java.util.*;
import java.io.*;

public class tle16c7p4 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        for (int T=readInt();T>0;T--) {
            long x = readLong(), ans = 0;
            while(x != 0) {
                if (x==3) {ans+=3; break;}
                if (x%4==1) x-=1;
                else if (x%4==3) x+=1;
                else x/=2;
                ans++;
            }
            System.out.println(ans);
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
