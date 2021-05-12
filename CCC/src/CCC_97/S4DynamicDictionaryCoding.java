// 09//02//2020
// https://dmoj.ca/problem/ccc97s4
package CCC_97;

import java.util.*;
import java.io.*;

public class S4DynamicDictionaryCoding {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int T = readInt(); List<String> list = new ArrayList(); String x;
        while((x=readLine())!=null) { //.trim() = IR and my "input" is wrong :/
            if(x.isEmpty()) {System.out.println(); list.clear(); continue;}
            String s[] = x.split(" "), out="";
            for (int i=0;i<s.length;i++) {
                if(!list.contains(s[i])) {
                    list.add(s[i]);
                    out += s[i];
                }
                else out += (list.indexOf(s[i])+1);
                if(i!=s.length-1) out += " ";
            }
            System.out.println(out);
        }
    }

    static String next() throws IOException {
        while (st == null || !st.hasMoreTokens())
            st = new StringTokenizer(br.readLine().trim());
        return st.nextToken();
    }

    static String readLine() throws IOException {
        return br.readLine();
    }

    static int readInt() throws IOException {
        return Integer.parseInt(next());
    }

    static long readLong() throws IOException {
        return Long.parseLong(next());
    }

    static double readDouble() throws IOException {
        return Double.parseDouble(next());
    }
}