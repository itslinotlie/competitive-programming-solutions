// 09/01/19
// https://dmoj.ca/problem/gfssoc2j2

import java.io.*;
import java.util.*;

public class FizzFuzz {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for (int i=1;i<=n;i++) {
            int a = i, b = 2*i-1;
            if (a%7 == 0) {
                if (a%13 == 0) System.out.print("Fizz Fuzz ");
                else System.out.print("Fizz ");
            }
            else if (a%13 == 0) System.out.print("Fuzz ");
            else System.out.print(i+" ");
            if (b%7 == 0) {
                if (b%13 == 0) System.out.println("Fizz Fuzz");
                else System.out.println("Fizz");
            }
            else if (b%13 == 0) System.out.println("Fuzz");
            else System.out.println(2*i-1);            
        }
    }
}