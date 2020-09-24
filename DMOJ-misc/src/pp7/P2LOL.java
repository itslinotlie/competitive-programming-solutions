// 11/09/2019
//https://dmoj.ca/problem/rgss2
package pp7;

import java.util.*;
import java.io.*;

public class P2LOL {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int bigx=1,bigy=1, smallx=1, smally=1;
        for (int i=0;i<n;i++) {
            int tempx = in.nextInt(), tempy = in.nextInt();
            if (tempx > bigx) bigx=tempx;
            else if (tempx < smallx) smallx=tempx;
            if (tempy > bigy) bigy=tempy;
            else if (tempy < smally) smally=tempy;           
        }
        System.out.println((bigx-smallx)*(bigy-smally));
    }
}
