// 11/09/2019
//https://dmoj.ca/problem/ccc14j1
package CCC_14;

import java.util.*;
import java.io.*;

public class J1TriangleTimes {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt(), b = in.nextInt(), c = in.nextInt();
        if (a+b+c == 180) {
            if (a==b && b==c) System.out.println("Equilateral");
            else if (a==b || b==c || c==a) System.out.println("Isosceles");
            else System.out.println("Scalene");
        }
        else System.out.println("Error");
    }
}
