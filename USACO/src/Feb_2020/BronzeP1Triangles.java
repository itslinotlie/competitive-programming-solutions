// 02/23/2020
//http://www.usaco.org/index.php?page=viewproblem2&cpid=1011
package Feb_2020;

import java.util.*;
import java.io.*;

public class BronzeP1Triangles {
    public static void main (String[] args) throws IOException{
//        Scanner in = new Scanner(new File("triangles.in"));
//        PrintWriter pr = new PrintWriter(new File("triangles.out"));
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        Point point[] = new Point[n];
        LinkedList<Integer> freqX[] = new LinkedList[20000+1], freqY[] = new LinkedList[20000+1];
        for (int i=0;i<=20000;i++) {freqX[i] = new LinkedList(); freqY[i] = new LinkedList();}
        
        int minX = Integer.MAX_VALUE, minY = Integer.MAX_VALUE, maxX = Integer.MIN_VALUE, maxY = Integer.MIN_VALUE;
        int ans = Integer.MIN_VALUE;
        
        for (int i=0;i<n;i++) {
            point[i] = new Point(in.nextInt(), in.nextInt());
            minX = Math.min(point[i].x, minX); minY = Math.min(point[i].y, minY);
            maxX = Math.max(point[i].x, maxX); maxY = Math.max(point[i].y, maxY);
            freqX[point[i].x+10000].add(point[i].y+10000);
            freqY[point[i].y+10000].add(point[i].x+10000);
        }
        for (int i=minY+10000;i<=maxY+10000;i++) {
            if (freqY[i].size()<2) continue;
            
            for (int j : freqY[i]) {
                for (int k : freqY[i]) {
                    for (int T : freqX[k]) {
                        if (!isPara(j-10000, i-10000, k-10000 , i-10000, k-10000, T-10000)) continue;
                        ans = Math.max(ans, getArea(j-10000, i-10000, k-10000 , i-10000, k-10000, T-10000));
                    }
                }
            }
        }
        System.out.println(ans);
//        pr.println(ans);
//        pr.close();
        
    }
    static boolean isPara(int x1, int y1, int x2, int y2, int x3, int y3) {
        if (x1==x2 || x1==x3 || x2 == x3) {
            if (y1==y2 || y1==y3 || y2 == y3) {
                return true;
            }
        }
        return false;
    }
    static int getArea(int x1, int y1, int x2, int y2, int x3, int y3) {
        return Math.abs(x1*y2 + x2*y3 + x3*y1 - x2*y1 - x3*y2 - x1*y3);
    }
    static class Point {
        int x, y;
        Point (int a, int b) {x=a;y=b;}
    }
}