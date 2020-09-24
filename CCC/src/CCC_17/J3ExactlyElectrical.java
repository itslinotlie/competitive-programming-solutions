// 02/17/2020
//https://dmoj.ca/problem/ccc17j3
package CCC_17;

import java.util.*;
import java.io.*;

public class J3ExactlyElectrical {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt(), b = in.nextInt(), c = in.nextInt(), d = in.nextInt(), t = in.nextInt();
        int dis = Math.abs(c-a) + Math.abs(d-b);
        System.out.println((dis-t)%2==0&&dis<=t?"Y":"N");
    }
}
