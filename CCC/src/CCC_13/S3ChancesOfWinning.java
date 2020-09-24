// 04/15/2020
// https://dmoj.ca/problem/ccc13s3
package CCC_13;

import java.util.*;
import java.io.*;

public class S3ChancesOfWinning {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int T, G, ans = 0, power = 0;
    static int arr[][] = new int[4+1][4+1];
    static Set<Long> set = new HashSet();
    public static void main (String[] args) throws IOException {
        T = readInt(); G = readInt();
        for (int i=1;i<=4;i++) {
            Arrays.fill(arr[i], 1, 4+1, -1);
            arr[i][i] = 0;
        }
        for (int i=0;i<G;i++) {
            int a = readInt(), b = readInt(), sa = readInt(), sb = readInt();       
            if (sa>sb) {arr[a][b]=3; arr[b][a]=0;}
            else if (sb>sa) {arr[a][b]=0; arr[b][a]=3;}
            else {arr[a][b]=1; arr[b][a]=1;}
        }
        for (int i=6-G;i>=1;i--) power+=(int)Math.pow(3, i);
        fun(arr);
        System.out.println(set.size());
    }
    static boolean sum(int a[][]) {
        int fav = 0, sum = 0, max = 0;
        for (int i=1;i<=4;i++) {
            for (int j=1;j<=4;j++) {
                if (i==T) fav+=a[i][j];
                else sum+=a[i][j];
            }
            if (sum>max) max = sum;
            sum = 0;
        }
        return fav>max;
    }
    static long get(int arr[][]) {
        long ans = 0, base = 131;
        for (int i=1;i<=4;i++) {
            for (int j=1;j<=4;j++) {
                ans = ans*base + arr[i][j];
            }
        }
        return ans;
    }
    static void fun(int a[][]) {
        if (full(a)) {
            if(sum(a)) set.add(get(arr));
        }
        for (int i=1;i<=4;i++) {
            for (int j=1;j<=4;j++) {
                if (a[i][j]!=-1 || j>=i) {}
                else {
                    a[i][j] = 3; a[j][i] = 0; power--; fun(a); 
                    a[i][j] = 0; a[j][i] = 3; power--; fun(a); 
                    a[i][j] = 1; a[j][i] = 1; power--; fun(a); 
                    a[i][j] = -1; a[j][i] = -1;
                }      
            }
        }
    }
    static boolean full(int a[][]) {
        boolean FLAG = true;
        for (int i=1;i<=4 && FLAG;i++) {
            for (int j=1;j<=4 && FLAG;j++) {
                if (a[i][j]==-1) FLAG = false;
            }
        }
        return FLAG;
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
