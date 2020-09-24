// 12/26/2019
// https://dmoj.ca/problem/coci07c4p1
package COCI_07;

import java.util.*;
import java.io.*;

public class C4P1Vauvau {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt(), b = in.nextInt(), c = in.nextInt(), d = in.nextInt();
        boolean dog1=true, dog2=true;
        int time1=a,time12=b,time2=c,time22=d;
        int x = in.nextInt(), y = in.nextInt(), z = in.nextInt(), time;
        boolean x1=false,x2=false,y1=false,y2=false,z1=false,z2=false;
        for (int i=1;i<Integer.max(Integer.max(x, y), Integer.max(y, z))+1;i++) {
            if (dog1) {
                if (x==i) x1=true;
                if (y==i) y1=true;
                if (z==i) z1=true;
                time1--;
            }
            else {
                time12--;
            }
            if (dog2) {
                if (x==i) x2=true;
                if (y==i) y2=true;
                if (z==i) z2=true;
                time2--;
            }
            else {
                time22--;
            }
            if (time1<=0) {
                dog1=false;
                time12=b;
                time1=a;
            }
            if (time12<=0) {
                dog1=true;
                time1=a;
                time12=b;
            }
            if (time2<=0) {
                dog2=false;
                time22=d;
                time2=c;
            }
            if (time22<=0) {
                dog2=true;
                time2=c;
                time22=d;
            }  
        }
        if (x1&&x2) System.out.println("both");
        else if (x1||x2) System.out.println("one");
        else System.out.println("none");
        
        if (y1&&y2) System.out.println("both");
        else if (y1||y2) System.out.println("one");
        else System.out.println("none");
        
        if (z1&&z2) System.out.println("both");
        else if (z1||z2) System.out.println("one");
        else System.out.println("none");
    }
}
