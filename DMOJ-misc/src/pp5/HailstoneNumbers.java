// 10/31/19
//https://dmoj.ca/problem/hailstone
package pp5;

import java.util.*;
public class HailstoneNumbers {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt(), counter = 0;
        
        while (a != 1) {
            if (a%2 != 0) { 
                a = a*3 + 1;
                counter++;
            }
            else { 
                a = a/2;
                counter++;
            }
        }
        System.out.println(counter);
    }
    
}
