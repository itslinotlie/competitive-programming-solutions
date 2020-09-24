// 12/01/19
//https://dmoj.ca/problem/bf3
package pp5;

import java.util.*;
public class NextPrime {
    public static boolean isPrime (int n) { 
        int root = (int)Math.sqrt(n);
        if (n==2) return true;
        if (n%2==0) return false;
        for (int i=3;i<=root;i+=2) {
            if (n%i==0) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        if (n<=2) System.out.println("2");
        else {
            for (int i=n;;i++) {
                if (isPrime(i)) {
                    System.out.println(i);
                    break;
                }
            }
        }      
    }
}
