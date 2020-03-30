// 03/17/2020
//https://dmoj.ca/problem/ccc08s4
package CCC_08;

import java.util.*;
import java.io.*;

public class S4TwentyFour {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int max = 1;
    static int arr[] = new int[4];
    static Set<Integer> o = new HashSet(), t = new HashSet();
    public static void main (String[] args) throws IOException {
        int n = readInt();
        for (int i=0;i<n;i++) {
            for (int j=0;j<4;j++) arr[j] = readInt();
            fun(arr[0], 1, 1, 0, 0, 0, arr[0]+"");
            fun(arr[1], 1, 0, 1, 0, 0, arr[1]+"");
            fun(arr[2], 1, 0, 0, 1, 0, arr[2]+"");
            fun(arr[3], 1, 0, 0, 0, 1, arr[3]+"");
            
            for (int a=0;a<4;a++) {
                for (int b=0;b<4;b++) {
                    if (b==a) continue;
                    for (int c=0;c<4;c++) {
                        if (c==a || c==b) continue;
                        for (int d=0;d<4;d++) {
                            if (d==a || d==b || d==c) continue;
                            
                            get(arr[a], arr[b], o); get (arr[c], arr[d], t);
                            Iterator<Integer> x = o.iterator();
                            while (x.hasNext()) {
                                int m = x.next();
                                Iterator<Integer> y = t.iterator();
                                while (y.hasNext()) {
                                    int o = y.next();
                                    max(m ,o);
                                }
                            }
                         o.clear(); t.clear();
                        }
                    }
                }
            }
            System.out.println(max);
            max = 0;
        }
    }
    static void get(int a, int b, Set<Integer> o) {
        o.add(a+b); o.add(a-b); o.add(b-a); o.add(a*b);
        if (b!=0 && a%b==0) o.add(a/b); if (a!=0 && b%a==0) o.add(b/a);
    }
    static void max(int a, int b) {
        if (a+b<=24) max = Math.max(max, a+b);
        if (a-b<=24) max = Math.max(max, a-b);
        if (b-a<=24) max = Math.max(max, b-a);
        if (a*b<=24) max = Math.max(max, a*b);
        if (b!=0 && a%b == 0 && a/b<=24) max = Math.max(max, a/b);
        if (a!=0 && b%a ==0 && b/a<=24) max = Math.max(max, b/a);
        
    }    
    static void fun(int sum, int idx, int e, int f, int g, int h, String ans) {
        if (idx==4) {if (sum<=24) max = Math.max(max, sum);}
        else {
            if (e==0) {
                fun(sum+arr[0], idx+1, 1, f, g, h, ans+"+"+arr[0]);
                fun(sum-arr[0], idx+1, 1, f, g, h, ans+"-"+arr[0]); fun(arr[0]-sum, idx+1, 1, f, g, h, arr[0]+"-"+ans);
                fun(sum*arr[0], idx+1, 1, f, g, h, ans+"*"+arr[0]);
                if (sum%arr[0]==0) fun(sum/arr[0], idx+1, 1, f, g, h, ans+"/"+arr[0]);
                if (sum!=0 && arr[0]%sum==0) fun(arr[0]/sum, idx+1, 1, f, g, h, arr[0]+"/"+ans);
            }
            if (f==0) {
                fun(sum+arr[1], idx+1, e, 1, g, h, ans+"+"+arr[1]);
                fun(sum-arr[1], idx+1, e, 1, g, h, ans+"-"+arr[1]); fun(arr[1]-sum, idx+1, e, 1, g, h, arr[1]+"-"+ans);
                fun(sum*arr[1], idx+1, e, 1, g, h, ans+"*"+arr[1]);
                if (sum%arr[1]==0) fun(sum/arr[1], idx+1, e, 1, g, h, ans+"/"+arr[1]);
                if (sum!=0 && arr[1]%sum==0) fun(arr[1]/sum, idx+1, e, 1 ,g, h, arr[1]+"/"+ans);
            }
            if (g==0) {
                fun(sum+arr[2], idx+1, e, f, 1, h, ans+"+"+arr[2]);
                fun(sum-arr[2], idx+1, e, f, 1, h, ans+"-"+arr[2]); fun(arr[2]-sum, idx+1, e, f, 1, h, arr[2]+"-"+ans);
                fun(sum*arr[2], idx+1, e, f, 1, h, ans+"*"+arr[2]);
                if (sum%arr[2]==0) fun(sum/arr[2], idx+1, e, f, 1, h, ans+"/"+arr[2]);
                if (sum!=0 && arr[2]%sum==0) fun(arr[2]/sum, idx+1, e, f, 1, h, arr[2]+"/"+ans);
            }
            if (h==0) {
                fun(sum+arr[3], idx+1, e, f, g, 1, ans+"+"+arr[3]);
                fun(sum-arr[3], idx+1, e, f, g, 1, ans+"-"+arr[3]); fun(arr[3]-sum, idx+1, e, f, g, 1, arr[3]+"-"+ans);
                fun(sum*arr[3], idx+1, e, f, g, 1, ans+"*"+arr[3]);
                if (sum%arr[3]==0) fun(sum/arr[3], idx+1, e, f, g, 1, ans+"/"+arr[3]);
                if (sum!=0 && arr[3]%sum==0) fun(arr[3]/sum, idx+1, e, f, g, 1, arr[3]+"/"+ans);
            }            
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
