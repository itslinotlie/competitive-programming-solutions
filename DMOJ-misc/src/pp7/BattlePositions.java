// 11/16/2019
//https://dmoj.ca/problem/seed3
package pp7;

import java.util.*;
import java.io.*;

public class BattlePositions {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt(), arr[] = new int[a+2], low = in.nextInt(), n = in.nextInt();
        for (int i=0;i<n;i++) {
            int x = in.nextInt(), y= in.nextInt(), z = in.nextInt();
            arr[x]+=z;
            arr[y+1]-=z;
        }
        for (int i=1;i<=a;i++) arr[i] += arr[i-1];
        int cnt = 0;
        for (int i=1;i<=a;i++) {
            if (arr[i] < low) cnt++;
        }
        System.out.println(cnt);
    }
}
