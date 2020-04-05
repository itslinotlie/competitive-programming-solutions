// 12/24/2019
//https://dmoj.ca/problem/halloween14p1
package pp7;

import java.util.*;
import java.io.*;

public class RabbitGirls {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        long a = in.nextLong(), b = in.nextLong(), r = a%b;
        double mid = b/2;
        if (r>mid) System.out.println(b-r);
        else {
            if (a/b > 0) System.out.println(r);
            else System.out.println(b-r);
        }
    }
}
