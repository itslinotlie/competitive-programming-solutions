// 12/09/2019
//https://dmoj.ca/problem/ccc14s3
package CCC_14;

import java.util.*;
import java.io.*;

public class S3TheGenevaConfection {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int T = in.nextInt();
        for (int i=0;i<T;i++) {
            int n = in.nextInt(), arr[] = new int[n], want = 1;
            for (int j=0;j<n;j++) arr[j] = in.nextInt();
            Stack<Integer> stack = new Stack<>();
            for (int j=n-1;j>=0;j--) {
                stack.push(arr[j]);
                while (!stack.isEmpty()&&stack.peek()==want) {
                    stack.pop(); want++;
                }
            }
            System.out.println(want>n? "Y":"N");
        }     
    }
}
