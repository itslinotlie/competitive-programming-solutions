// 07/07/2020
// https://dmoj.ca/problem/dwite07c3p2
package DWITE_07;

import java.util.*;
import java.io.*;

public class R3P2TheresAnEssayInMyCode {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        for (int t=1;t<=5;t++) {
            String x = readLine(), tmp = "";
            boolean quote = false, wquote = false, squote = false, before = false;
            for (int i=0;i<x.length();i++) {
                if(x.charAt(i)=='/' && i!=x.length()-1 && x.charAt(i+1)=='*') {
                    for (int j=i+2;j<x.length();j++) {
                        if(x.charAt(j)=='*' && j!=x.length()-1 && x.charAt(j+1)=='/') {
                            if(before) System.out.print(" ");
                            System.out.print(x.subSequence(i+2, j));
                            before = true;
                            i=j+1;
                        }
                    }
                }
                else if (x.charAt(i)=='/' && i!=x.length()-1 && x.charAt(i+1)=='/') {
                    if(before) System.out.print(" ");
                    System.out.print(x.substring(i+2, x.length())); break;
                }
                else if(x.charAt(i)=='"' || x.charAt(i)=='\'' && !quote) {
                    quote = true;
                    if (x.charAt(i)=='"') wquote = true;
                    else squote = true;
                    for (int j=i+1;j<x.length();j++) {
                        if (((wquote && x.charAt(j)=='"') || (squote && x.charAt(j)=='\'')) && before) {
                            System.out.print(" ");
                        }
                        if (wquote && x.charAt(j)=='"') {
                            System.out.print(x.subSequence(i+1, j));
                            i=j;
                            quote = false; wquote = false; before = true;
                        }
                        else if (squote && x.charAt(j)=='\'') {
                            System.out.print(x.subSequence(i+1, j));
                            i=j;
                            quote = false; squote = false; before = true;
                        }
                    }
                } 
            }
            System.out.println();
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
