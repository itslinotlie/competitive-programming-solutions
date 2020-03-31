// 01/25/2020
//https://dmoj.ca/problem/ccc10j5
package CCC_10;

import java.util.*;
import java.io.*;

public class J5KnightHop {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int x1 = in.nextInt(), y1 = in.nextInt(), x2 = in.nextInt(), y2 = in.nextInt();
        int dis[][] = new int[8+1][8+1];
        boolean vis[][] = new boolean[8+1][8+1];
        Queue<String> q = new LinkedList();
        
        q.add(x1+" "+y1);
        dis[x1][y1] = 0; vis[x1][y1] = true;
        while (!q.isEmpty() && !vis[x2][y2]) {
            String tmp = q.poll();
            int a = Integer.parseInt(tmp.substring(0, 1));
            int b = Integer.parseInt(tmp.substring(2, 3));
            if (!vis[a][b]) continue;
            if (a+2<=8) {
                if (b+1<=8) { //5:30
                    dis[a+2][b+1] = dis[a][b] + 1; vis[a+2][b+1] = true; q.add((a+2)+" "+(b+1));
                }
                if (b-1>=1) { //6:30
                    dis[a+2][b-1] = dis[a][b] + 1; vis[a+2][b-1] = true; q.add((a+2)+" "+(b-1));
                }
            }
            if (a+1<=8) {
                if (b+2<=8) { //3:30
                    dis[a+1][b+2] = dis[a][b] + 1; vis[a+1][b+2] = true; q.add((a+1)+" "+(b+2));
                }
                if (b-2>=1) { //8:30
                    dis[a+1][b-2] = dis[a][b] + 1; vis[a+1][b-2] = true; q.add((a+1)+" "+(b-2));
                }
            }
           if (a-1>=1) {
                if (b+2<=8) { //2:30
                    dis[a-1][b+2] = dis[a][b] + 1; vis[a-1][b+2] = true; q.add((a-1)+" "+(b+2));
                }
                if (b-2>=1) { //9:30
                    dis[a-1][b-2] = dis[a][b] + 1; vis[a-1][b-2] = true; q.add((a-1)+" "+(b-2));
                }
            }
            if (a-2>=1) {
                if (b+1<=8) { //1:00
                    dis[a-2][b+1] = dis[a][b] + 1; vis[a-2][b+1] = true; q.add((a-2)+" "+(b+1));
                }
                if (b-1>=1) { //11:30
                    dis[a-2][b-1] = dis[a][b] + 1; vis[a-2][b-1] = true; q.add((a-2)+" "+(b-1));
                }
            }
        }  
        System.out.println(dis[x2][y2]);
    }
}