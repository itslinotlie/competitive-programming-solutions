// 12/27/2019
//https://dmoj.ca/problem/ccc12j2
package CCC_12;

import java.util.*;
import java.io.*;

public class J2SoundsFishy {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt(), b = in.nextInt(), c = in.nextInt(), d = in.nextInt();
        if (a==b&&c==d&&a==c) System.out.println("Fish At Constant Depth");
        else if (a<b&&b<c&&c<d) System.out.println("Fish Rising");
        else if (a>b&&b>c&&c>d) System.out.println("Fish Diving");
        else System.out.println("No Fish");
    }
}
