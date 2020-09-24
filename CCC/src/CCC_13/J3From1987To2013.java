//11/08/2019
//https://dmoj.ca/problem/ccc13j3
package CCC_13;

import java.util.*;
import java.io.*;

public class J3From1987To2013 {
    public static boolean nextInt(int n) {
        String temp = Integer.toString(n);
        for (int i=0;i<temp.length();i++) {
            for (int j=i+1;j<temp.length();j++) {
                if (temp.charAt(i)==temp.charAt(j)) return false;                
            }

        }
        return true;
    }
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for (int i=n+1;;i++) {
            if (nextInt(i) == true) {
                System.out.println(i);
                break;
            }
        }
    }
}
