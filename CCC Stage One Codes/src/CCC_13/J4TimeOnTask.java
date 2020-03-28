//10/31/19
//https://dmoj.ca/problem/ccc13j4
package CCC_13;

import java.util.*;
public class J4TimeOnTask {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int total = in.nextInt(), n = in.nextInt(), a[] = new int[n];
        for (int i=0;i<n;i++) a[i] = in.nextInt();
        Arrays.sort(a);
        
        int counter = 0;
        for (int i=0;i<n;i++) {
            if ((total-a[i])>= 0) {
                counter ++;
                total -= a[i];
            }
            else break;
        }
        System.out.println(counter);
    }
    
}
