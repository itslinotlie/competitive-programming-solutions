// 11/14/2019
//https://dmoj.ca/problem/postfix
package pp7;

import java.util.*;
import java.io.*;

public class PostfixNotation {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        Stack<String> stack = new Stack<>();
        String arr[] = in.nextLine().split("[ ]");
        for (int i=0;i<arr.length;i++) {           
            switch(arr[i]) {
                case "*": double a = Double.parseDouble(stack.pop()), b = Double.parseDouble(stack.pop()); stack.add(Double.toString(a*b)); break;
                case "/": double c = Double.parseDouble(stack.pop()), d = Double.parseDouble(stack.pop()); stack.add(Double.toString(d/c)); break;
                case "+": double e = Double.parseDouble(stack.pop()), f = Double.parseDouble(stack.pop()); stack.add(Double.toString(e+f)); break;
                case "-": double g = Double.parseDouble(stack.pop()), h = Double.parseDouble(stack.pop()); stack.add(Double.toString(h-g)); break;
                case "%": double j = Double.parseDouble(stack.pop()), k = Double.parseDouble(stack.pop()); stack.add(Double.toString(j%k)); break;
                case "^": double l = Double.parseDouble(stack.pop()), m = Double.parseDouble(stack.pop()); stack.add(Double.toString(Math.pow(l, m))); break;
                default: stack.add(arr[i]); break;
            }
        }
        System.out.println(stack.pop());
    }
}