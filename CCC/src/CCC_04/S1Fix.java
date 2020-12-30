// 01/21/2020
// https://dmoj.ca/problem/ccc04s1
package CCC_04;

import java.util.*;
import java.io.*;

public class S1Fix {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(); in.nextLine();
        for (int i=0;i<n;i++) {
            String a = in.nextLine(), b = in.nextLine(), c = in.nextLine();
            if (a.startsWith(b) || a.startsWith(c) ||
                    b.startsWith(a) || b.startsWith(c) ||
                    c.startsWith(a) || c.startsWith(b) ||
                    a.endsWith(b) || a.endsWith(c) ||
                    b.endsWith(a) || b.endsWith(c) || 
                    c.endsWith(a) || c.endsWith(b)) System.out.println("No");
            else System.out.println("Yes");
        }
    }
}
