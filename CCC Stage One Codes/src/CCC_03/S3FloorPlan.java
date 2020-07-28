// 03/30/2020
// https://dmoj.ca/problem/ccc03s3
package CCC_03;

import java.util.*;
import java.io.*;

public class S3FloorPlan {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    static int k, r, c, a[][];
    public static void main (String[] args) throws IOException {
        k = readInt(); r = readInt(); c = readInt(); a = new int[r][c];
        //reading input
        for (int i=0;i<r;i++) {
            char tmp[] = readLine().toCharArray();
            for (int j=0;j<c;j++) {
                if (tmp[j]=='I') a[i][j] = -1;
                else a[i][j] = 0;
            }
        }
        //assigning rooms their respective "code"
        int idx = 1;
        for (int i=0;i<r;i++) {
            for (int j=0;j<c;j++) {
                if (a[i][j]!=0) continue;
                check(i, j, idx); idx++;
            }
        }
        //determining the area of each room
        pt area[] = new pt[idx];
        for (int i=0;i<idx;i++) area[i] = new pt();  
        for (int i=0;i<r;i++) {
            for (int j=0;j<c;j++) {
                if (a[i][j]==-1) continue;
                area[a[i][j]].value++;
            }
        }
        Arrays.sort(area);
        int id = 0, cnt = 0;
        //subtracting the largest area and going down
        while (k>=0) {
            if (id==idx) break;
            if (k-area[id].value>=0) {
                k-=area[id].value;
                if (id+1==idx) break;
                id++; cnt++;
            }
            else break;
        }
        System.out.println(cnt==1? cnt+" room, "+k+" square metre(s) left over":cnt+" rooms, "+k+" square metre(s) left over");
    }
    static class pt implements Comparable<pt> {
        int value;
        public int compareTo(pt a) {return Integer.compare(a.value, value);}
    }
    static void check(int y, int x, int idx) {
        if (0<=y && y<r && 0<=x && x<c && a[y][x]==0) {
            a[y][x] = idx;
            check(y+1, x, idx);
            check(y-1, x, idx);
            check(y, x+1, idx);
            check(y, x-1, idx);
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
