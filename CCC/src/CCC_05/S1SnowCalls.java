// 03/22/2020
// https://dmoj.ca/problem/ccc05s1
package CCC_05;

import java.util.*;
import java.io.*;

public class S1SnowCalls {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int n = readInt();
        for (int i=0;i<n;i++) System.out.println(getWord(readLine()));
    }
    static String getWord(String line) {
        String ans = "";
        int i=0;
        while (ans.length()<12) {
            char n = line.charAt(i); i++;
            if (n=='0') ans+="0"; 
            else if (n=='1') ans+="1";
            else if (n=='2'||n=='A'||n=='B'||n=='C') ans+="2";
            else if (n=='3'||n=='D'||n=='E'||n=='F') ans+="3";
            else if (n=='4'||n=='G'||n=='H'||n=='I') ans+="4";
            else if (n=='5'||n=='J'||n=='K'||n=='L') ans+="5";
            else if (n=='6'||n=='M'||n=='N'||n=='O') ans+="6";
            else if (n=='7'||n=='P'||n=='Q'||n=='R'||n=='S') ans+="7";
            else if (n=='8'||n=='T'||n=='U'||n=='V') ans+="8";
            else if (n=='9'||n=='W'||n=='X'||n=='Y'||n=='Z') ans+="9";
            if (ans.length()==3 || ans.length() ==7) ans+="-";
        }
        return ans;
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
