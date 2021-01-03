// 04/04/2020
// https://dmoj.ca/problem/ccc09s1
package CCC_09;

import java.util.*;
import java.io.*;

public class S1CoolNumbers {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int MV = (int)1e8;
        List<Integer> s = new ArrayList(), c = new ArrayList();
        for (int i=1;i*i<=MV;i++) s.add(i*i);
        for (int i=1;i*i*i<=MV;i++) c.add(i*i*i);
        List<Integer> bk = new ArrayList();
        Iterator<Integer> itr = c.iterator();
        while(itr.hasNext()) {
            int tmp = itr.next();
            if(Math.sqrt(tmp)==Math.floor(Math.sqrt(tmp))) {
                bk.add(tmp);
            }
        }
        int a = readInt(), b = readInt(), cnt = 0;
        itr = bk.iterator();
        while(itr.hasNext()) {
            int tmp = itr.next();
            if (tmp>=a && tmp<=b) {
                cnt++;
            }
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
