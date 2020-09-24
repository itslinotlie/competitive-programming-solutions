// 11/09/2019
//https://dmoj.ca/problem/ccc07j1
package CCC_07;

import java.util.*;
import java.io.*;

public class J1WhoIsInTheMiddle {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
            int a = in.nextInt(), b = in.nextInt(), c = in.nextInt();
            int arr[] = {a,b,c};
            Arrays.sort(arr);
            System.out.println(arr[1]);  
    }
}
