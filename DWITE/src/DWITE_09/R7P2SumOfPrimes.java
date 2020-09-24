//11/09/19
//https://dmoj.ca/problem/dwite09c7p2
package DWITE_09;

import java.util.*;
public class R7P2SumOfPrimes {
    public static int isPrime (int n) {
        if (n==2) return 2;
        int root = (int)Math.sqrt(n);
        for (int i=2;i<=root;i++) {
            if (n%i==0) return 0;
        }
        return n;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int total = 0;
        for (int i=1;i<n+1;i++) {
            total += isPrime(i);
        } System.out.println(total-1);
        for (int i=1;i<5;i++) {
            n = in.nextInt();
            total = 0;
            for (int j=1;j<n+1;j++) {
                total += isPrime(j);
            } System.out.println(total-1);  
        }
    }
}
