//02/25/20
//https://dmoj.ca/problem/ccc16j4
package CCC_16;

import java.util.*;
public class J4ArrivalTime {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in); 
        String time[] = in.nextLine().split("[:]");
        int h = Integer.parseInt(time[0]), m = Integer.parseInt(time[1]);
        double cnt = 120;
        while (cnt > 0.5) {
            m++;
            if (m>59) {h++; m = 0;}
            if (h>23) {h=0; m = 0;}
            if ((h>=7 && m>=0 && (h<=9 && m<=59 || h==10 && m==0)) || (h>=15 && m>=0 && (h<=18 && m<=59 || h==19 && m==0))) cnt-=0.5;
            else cnt-=1;
        }
        System.out.printf("%02d:%02d",h,m);
    }  
}
