// 10/01/2018
//https://dmoj.ca/problem/ccc14s1
package CCC_14;

import java.util.*;
import java.io.*;

public class S1PartyInvitation {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int row=0,K=0,M=0, R[] = new int[10], i=0;
        String input;
        for (input=readLine();!input.isEmpty();input=readLine()){
            if (row==0) {
                K=Integer.parseInt(input);
                row++;
                continue;
            }
            if (row==1) {
                M=Integer.parseInt(input);
                row++;
                continue;
            }
            if (row>1){
                R[i]=Integer.parseInt(input);
                i++;
                row++;
                if (i<M) continue;
                else break;
            }
            if (i>=M) break;
        }
        int[]iDisplay=new int[100];
        for (i=0;i<K;i++){
            iDisplay[i]=i+1;
        }
        int step=0;
        for (int x=0;x<M;x++){
            step=R[x];
            i=0;
            for (int y=0;y<K;y++){
                if ((y+1)%step!=0) {
                    iDisplay[i]=iDisplay[y];
                    i++;
                }
            }
            for (int z=i;z<K;z++) iDisplay[z]=0;
        }
        for (int x=0;iDisplay[x]!=0;x++) System.out.println(iDisplay[x]);
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
