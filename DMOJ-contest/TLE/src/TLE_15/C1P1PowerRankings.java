// 02/17/20
//https://dmoj.ca/problem/tle15p1
package TLE_15;

import java.util.*;
public class C1P1PowerRankings {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt(), P = in.nextInt();
        Hour a[] = new Hour[N];
        for (int i=0;i<N;i++) a[i] = new Hour(in.next(),0);
        for (int i=0;i<P;i++) {
            for (int j=0;j<N;j++) {
                a[j].points += in.nextInt();
            }
        }
        Arrays.sort(a, new HourComparator());
        for (int i=0;i<N;i++) {
            System.out.println((i+3)+ ". "+ a[i].name);
        }     
    }
    static class Hour {
        String name;
        int points;
        Hour (String n, int p) {name = n; points = p;};
    }
    static class HourComparator implements Comparator<Hour> {
        public int compare (Hour a, Hour b) {
            return -Integer.compare(a.points, b.points);
        }
    }
}
