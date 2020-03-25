// 12/27/2019
//https://dmoj.ca/problem/ccc11j1
package CCC_11;

import java.util.*;
import java.io.*;

public class J1WhichAlien {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt(), b  = in.nextInt();
        boolean t = false, v = false, g = false;
        if (a>=3 && b<=4) t = true;
        if (a<=6 && b>=2) v = true;
        if (a<=2 && b<=3) g = true;
        
        if (t) System.out.println("TroyMartian");
        if (v) System.out.println("VladSaturnian");
        if (g) System.out.println("GraemeMercurian");
    }   
}
