// 04/10/2020
//https://dmoj.ca/problem/dmpg17b2
package DMPG_17;

import java.util.*;
import java.io.*;
public class B2Yoda {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        String a[] = readLine().split(","); char tmp, pun;
        boolean y = true;
        pun = a[1].charAt(a[1].length()-1);
        
        if(a[0].length()==0) {
            if(a[1].length()==1) {System.out.println(pun);System.exit(0);}
            if(a[1].charAt(0)==' ') y = false;
             if(y) {
                tmp = a[1].toUpperCase().charAt(0);
                a[1] = a[1].substring(1, a[1].length()-1);
                a[1] = tmp + a[1];
            } else {
                tmp = a[1].toUpperCase().charAt(1);
                a[1] = a[1].substring(2, a[1].length()-1);
                a[1] = tmp + a[1];
            } 
            System.out.println(a[1]+pun); System.exit(0);
        }
        
        if(a[1].charAt(0)==' ') y = false;
        if(a[1].length()==1 || a[1].length()==0) {
            System.out.println(a[0]+pun);
        }
        else {
            tmp = a[0].toLowerCase().charAt(0);
            a[0] = a[0].substring(1, a[0].length());
            a[0] = tmp + a[0];
            if(y) {
                tmp = a[1].toUpperCase().charAt(0);
                a[1] = a[1].substring(1, a[1].length()-1);
                a[1] = tmp + a[1];
            } else {
                tmp = a[1].toUpperCase().charAt(1);
                a[1] = a[1].substring(2, a[1].length()-1);
                a[1] = tmp + a[1];
            }    
            System.out.println(a[1]+" "+a[0]+pun);
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
