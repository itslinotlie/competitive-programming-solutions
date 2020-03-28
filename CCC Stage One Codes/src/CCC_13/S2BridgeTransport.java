//10/19/19
//https://dmoj.ca/problem/ccc13s2
package CCC_13;

import java.util.*;
public class S2BridgeTransport {
    public static void main(String[] args) {
        Scanner in = new Scanner (System.in);
        int W = in.nextInt(), N = in.nextInt(), a[] = new int[N], sum = 0;
        for (int i=0;i<N;i++) {
            a[i] = in.nextInt();
            if (i<4) sum += a[i];
            else sum += a[i] - a[i-4];
            
            if (sum > W) { System.out.println(i); return; }
        }
        System.out.println(N);
    }
    
}