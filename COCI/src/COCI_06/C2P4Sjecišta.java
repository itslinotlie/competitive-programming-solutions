// 12/24/2019
// https://dmoj.ca/problem/coci06c2p4
package COCI_06;

import java.util.*;
import java.io.*;

public class C2P4Sjecišta {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int num = n*(n-1)*(n-2)*(n-3);
        System.out.println(num/24);
    }
}
