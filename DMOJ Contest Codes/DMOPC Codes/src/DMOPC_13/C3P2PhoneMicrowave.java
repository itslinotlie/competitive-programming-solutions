// 12/24/2019
// https://dmoj.ca/problem/dmopc13c3p2
package DMOPC_13;

import java.util.*;
import java.io.*;

public class C3P2PhoneMicrowave {
    public static void main (String[] args) {
        Scanner in = new Scanner (System.in);
        int days [] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
        int s = in.nextInt(); in.nextLine();
        String t [] = in.nextLine().split("[:/ ]");
        int year = Integer.parseInt(t[0]), month = Integer.parseInt(t[1]), day = Integer.parseInt(t[2]);
        int hour = Integer.parseInt(t[3]), minute = Integer.parseInt(t[4]), second = Integer.parseInt(t[5]);
        
        hour -= s;
        while (hour < 0) {
            hour += 24; day --;
            if (day == 0) {
                month--; 
                if (month == 0) {
                    month = 12;
                    year--;
                }
                day += days[month]; 
            }
        }
        System.out.printf("%d/%02d/%02d %02d:%02d:%02d", year, month, day, hour, minute, second);
    }
}
