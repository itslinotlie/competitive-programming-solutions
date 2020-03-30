//10/31/19
//https://dmoj.ca/problem/ccc08s1
package CCC_08;

import java.util.*;
public class S1ItsColdHere {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a[] = in.nextLine().split("[ ]");
        int temp = Integer.parseInt(a[1]), coldest = 0;
        String name = a[0], coldestname = "";
        
        if (coldest > temp) {
            coldest = temp;
            coldestname = a[0];
        }
        while (!"Waterloo".equals(name)) {
            a = in.nextLine().split("[ ]");
            temp = Integer.parseInt(a[1]);
            name = a[0];
            if (coldest > temp) {
                coldest = temp;
                coldestname = a[0];
            }
        }
        System.out.println(coldestname);
    }    
}
