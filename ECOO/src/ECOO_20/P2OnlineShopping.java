// 05/02/2020
// https://dmoj.ca/problem/ecoo20p2
package ECOO_20;

import java.util.*;
import java.io.*;

public class P2OnlineShopping {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main (String[] args) throws IOException {
        int T = readInt();
        for (int t=0;t<T;t++) {
            int n = readInt(), sum = 0, MV = 100;
            Map<String, Integer> map = new HashMap();
            List<pt> lis[] = new ArrayList[MV*MV+1];
            for (int i=1;i<=MV*MV;i++) lis[i] = new ArrayList();
            for (int i=0;i<n;i++) {
                int m = readInt();
                for (int j=0;j<m;j++) {
                    String s = next();
                    int p = readInt(), q = readInt();                
                    map.put(s, map.getOrDefault(s, map.size()+1));
                    lis[map.get(s)].add(new pt(p, q));
                }
            }
            int k = readInt();
            for (int i=0;i<k;i++) {
                String want = next();
                int amt = readInt();
                for (Map.Entry<String, Integer> e : map.entrySet()) { 
                    if (e.getKey().equals(want)) {
                        int id = e.getValue();
                        Collections.sort(lis[id]);
                        while(amt>0) {
                            if (lis[id].isEmpty()) break;
                            pt tmp = lis[id].get(0);
                            if (tmp.amt<=0) lis[id].remove(0);
                            else {
                                tmp.amt--;
                                amt--;
                                sum+=tmp.prc;
                            }
                        }
                    }
                } 
            }
            System.out.println(sum);
        }
    }
    static class pt implements Comparable<pt>{
        int prc, amt;
        pt(int prc, int amt) {this.prc=prc; this.amt=amt;}
        public int compareTo(pt a) {
            return -Integer.compare(a.prc, prc);
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
