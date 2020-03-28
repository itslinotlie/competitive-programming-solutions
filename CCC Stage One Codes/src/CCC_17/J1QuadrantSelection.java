// 12/27/2019
//https://dmoj.ca/problem/ccc17j1
package CCC_17;

import java.util.*;
import java.io.*;

public class J1QuadrantSelection {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int x = in.nextInt(), y = in.nextInt();
        if (x>0 && y>0) System.out.println("1");
        else if (x<0&&y>0) System.out.println("2");
        else if (x<0&&y<0) System.out.println("3");
        else System.out.println("4");
    }   
}
