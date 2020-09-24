// 01/22/2020
// https://dmoj.ca/problem/ccc03j2
package CCC_03;

import java.util.*;
import java.io.*;

public class J2PicturePerfect {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int s1, s2;
        if (Math.sqrt(n)%1==0) {
            s1 = (int)Math.sqrt(n);
            System.out.println("Minimum perimeter is "+(4*s1)+" with dimensions "+s1+" x "+s1);
        }
        else {
            s1 = (int)Math.sqrt(n);
            for (int i=s1;i<=n;i++) {
                if (n%i==0) {
                    s2 = i;
                    s1 = n/s2;
                    System.out.println("Minimum perimeter is "+(2*(s1+s2))+" with dimensions "+s1+" x "+s2);
                    break;
                }
            }
        }
    }
}
