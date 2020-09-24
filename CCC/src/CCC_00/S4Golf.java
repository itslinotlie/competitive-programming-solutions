// 02/29/2020
//https://dmoj.ca/problem/ccc00s4
package CCC_00;

import java.util.*;
import java.io.*;

public class S4Golf {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int total = in.nextInt(), n = in.nextInt(), dp[] = new int[total+1];   
        Arrays.fill(dp, 10000);
        dp[0] = 0;
        for (int i=1;i<=n;i++) {
            int tmp = in.nextInt();
            for (int j=tmp;j<=total;j++) {
                dp[j] = Math.min(dp[j], dp[j-tmp]+1);
            }
        }
        System.out.println(dp[total]==10000? "Roberta acknowledges defeat.": "Roberta wins in "+ dp[total] +" strokes.");
    }
}
