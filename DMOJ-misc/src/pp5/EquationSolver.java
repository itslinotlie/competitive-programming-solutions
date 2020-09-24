// 11/17/2019
//https://dmoj.ca/problem/gfssoc2j3
package pp5;

import java.util.*;
import java.io.*;

public class EquationSolver {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        String arr[] = in.nextLine().split("[ ]");
        int counter = Integer.parseInt(arr[0]);
        for (int i=1;i<arr.length-1;i+=2) {
            int temp = Integer.parseInt(arr[i+1]);
            if (arr[i].equals("P")) counter += temp;
            else counter -= temp;
        }
        System.out.println(counter);
    }
}
