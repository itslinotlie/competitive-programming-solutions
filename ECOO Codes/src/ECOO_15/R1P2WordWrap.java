// 03/19/2020
// https://dmoj.ca/problem/ecoo15r1p2
package ECOO_15;

import java.util.*;
import java.io.*;

public class R1P2WordWrap {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static String a[];
    static int max, al;
    public static void main (String[] args) throws IOException {
        for (int T=0;T<10;T++) {
            int W = readInt();
            String a[] = readLine().split("[ ]");
            List<String> al = new ArrayList();
            for (int i=0;i<a.length;i++) {
                int w = W, s = a[i].length(); String tmp = ""; 
                boolean FLAG = false;
                if (s>w) {
                    int d = s/w;
                    for (int j=0;j<d;j++) al.add(a[i].substring(j*w, (j+1)*w));
                    tmp+=a[i].substring(d*w, a[i].length()) + " "; 
                    w=w-(a[i].length()-d*W); i++; FLAG = true;
                }
                if (i==a.length) {
                    if (tmp.charAt(tmp.length()-1)==' ') al.add(tmp.substring(0, tmp.length()-1));
                    else al.add(tmp);
                    break;
                }
                while (w-a[i].length()-1>=0) {
                    if (i==a.length) break;
                    tmp+=a[i]+" "; w=w-a[i].length()-1; i++; FLAG = true;
                    if (i==a.length) break;
                }

                if (i<a.length) 
                    while (w-a[i].length()>=0) {
                    if (i==a.length) break;
                    tmp+=a[i]; w-=a[i].length(); i++; FLAG = true;
                    if (i==a.length) break;
                }
                if (FLAG) i--;
                if (tmp.length()==1 && tmp==" " || tmp.length()==0) {}
                else if (tmp.charAt(tmp.length()-1)==' ') al.add(tmp.substring(0, tmp.length()-1));
                else al.add(tmp);
            } 
            Iterator<String> itr = al.iterator();
            while (itr.hasNext()) {
                String tmp = itr.next();
                if (tmp.equals(" ") && tmp.length()==1 || tmp.equals("")) {}
                else System.out.println(tmp);
            }
            System.out.println("=====");
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
