// 10/30/19
// https://dmoj.ca/problem/coci16c1p1
package COCI_XX;

import java.util.*;
public class C1P1Tarifa {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int plan = in.nextInt();
        int month = in.nextInt();
        int total = 0;
        
        for (int i=0;i<month;i++) {
            int temp = in.nextInt();
            total += plan - temp;
        }
        System.out.println(total+plan);
    }
}
