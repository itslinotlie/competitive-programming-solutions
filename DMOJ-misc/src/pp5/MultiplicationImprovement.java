// 12/27/2019
//https://dmoj.ca/problem/miaudax
package pp5;

import java.util.*;
import java.io.*;

public class MultiplicationImprovement {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        String arr[] = in.nextLine().split("[x]");
        Arrays.sort(arr);
        long total = 1;
        for (int i=0;i<arr.length;i++) {
            if (i==arr.length-1) System.out.print(arr[i]);
            else System.out.print(arr[i]+"x");
            total*=Integer.parseInt(arr[i]);
        }
        System.out.println();
        System.out.println(total);
    }   
}
