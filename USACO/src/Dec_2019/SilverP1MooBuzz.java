// 02/17/2020
// http://www.usaco.org/index.php?page=viewproblem2&cpid=966
package Dec_2019;

import java.util.*;
import java.io.*;

public class SilverP1MooBuzz {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        long lo = 1, hi = (long)1e12, ans = 0;
        while (lo <= hi) {
            long mid = (lo + hi)/2;
            if (count(mid) >=n) {ans = mid; hi = mid-1;}
            else lo = mid+1;
        }
        System.out.println(ans);
    }
    static long count (long x) {
        return x - x/3 - x/5 + x/15;
    }
}