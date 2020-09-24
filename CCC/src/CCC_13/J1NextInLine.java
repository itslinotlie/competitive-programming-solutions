// 11/09/2019
//https://dmoj.ca/problem/ccc13j1
package CCC_13;

import java.util.*;
import java.io.*;

public class J1NextInLine {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt(), b = in.nextInt();
        int increment = b-a;
        System.out.println(b+increment);
    }
}
