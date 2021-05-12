// 02/25/2020
// https://dmoj.ca/problem/ccc97s2
package CCC_97;

import java.util.*;
import java.io.*;

public class S2NastyNumbers {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), arr[] = new int[n];
        for(int i=0;i<n;i++) {
            ArrayList<Point> list = new ArrayList();
            int tmp = in.nextInt();
            boolean FLAG = true;
            getFactor(tmp, list);
            for (Point j : list) {
                for (Point k : list) {
                    if (j.x==k.x) continue;
                    if (j.y-j.x==k.y+k.x) {System.out.println(tmp+" is nasty"); FLAG = false; break;}
                }
            }
            if (FLAG) System.out.println(tmp+" is not nasty");
        }
    }
    static void getFactor(int n, ArrayList<Point> list) {
        for (int i=1;i<=(int)(Math.sqrt(n));i++) {
            if (n%i==0) list.add(new Point(i, n/i));
        }
    }
    static class Point {
        int x,y;
        Point (int a, int b) {x=a;y=b;}
    }
    
}
