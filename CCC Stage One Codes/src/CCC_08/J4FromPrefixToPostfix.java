// 12/14/2019
//https://dmoj.ca/problem/ccc08j4
package CCC_08;

import java.util.*;
import java.io.*;

public class J4FromPrefixToPostfix {
    public static boolean isOperator(String n) {
        switch (n) {
            case"+": 
            case"-": return true;
            default: return false;
        }
    }
    
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        String arr[] = in.nextLine().split("[ ]");
        while (!arr[0].equals("0")) {
            Stack<String> stack = new Stack<>();
            for (int i=arr.length-1;i>=0;i--) {
                if (isOperator(arr[i])) {
                    String a = stack.pop(), b = stack.pop();
                    String temp = a+" "+b+" "+arr[i];
                    stack.add(temp);
                }
                else {
                    stack.add(arr[i]);
                }                
            }
            System.out.println(stack.pop());
            arr = in.nextLine().split("[ ]");
        }
    }
}
