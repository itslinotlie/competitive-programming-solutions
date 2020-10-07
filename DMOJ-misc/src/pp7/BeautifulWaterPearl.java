// 05/26/2020
// https://dmoj.ca/problem/tc18summerb
package pp7;

import java.util.*;
import java.io.*;

public class BeautifulWaterPearl {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int c = readInt(), d = readInt(), e = readInt(), a = 0, b = 0, cnt = 1;
        for (int i=30;i>=0;i--) {
            if ((e>>i & 1) != 0) {cnt<<=1; a=a<<1|1; b=b<<1;}
            else if ((d>>i & 1) != 0) {a=a<<1|1; b=b<<1|1;}
            else {a<<=1; b<<=1;}
        }
        System.out.println((!( (a|b)==c && (a&b)==d && (a^b)==e))? 0:cnt);
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