// 03/08/2020
//https://dmoj.ca/problem/dwite08c2p2
package DWITE_08;

import java.util.*;
import java.io.*;

public class R2P2MyFavouriteDigit {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        for (int i=0;i<5;i++) {
            char line[] = in.nextLine().toCharArray();
            int max = Integer.MIN_VALUE;
            for (int j=0;j<line.length;j++) {
                max = Math.max(max, (int)line[j]);
            }
            System.out.println((char)max);
        }
    }
}
