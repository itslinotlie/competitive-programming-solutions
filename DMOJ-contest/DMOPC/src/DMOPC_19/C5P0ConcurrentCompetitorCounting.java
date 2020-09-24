// 02/29/2020
// https://dmoj.ca/problem/dmopc19c5p0
package DMOPC_19;

import java.util.*;
import java.io.*;

public class C5P0 {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), cutoff = in.nextInt(); in.nextLine();
        for (int i=0;i<n;i++) {
            String name = in.next();
            int points = in.nextInt();
            System.out.println(points>cutoff? name+" will advance" : name+" will not advance");
        }
    }
}
