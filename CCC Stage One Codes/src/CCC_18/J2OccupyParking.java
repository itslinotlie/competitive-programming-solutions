// 09/19/19
//https://dmoj.ca/problem/ccc18j2
package CCC_18;

import java.util.Scanner;
public class J2OccupyParking {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt(), counter = 0;
        String day1 = in.nextLine(), day2 = in.nextLine();
        for (int i=0;i<N;i++) {
            if (day1.charAt(i)==day2.charAt(i)&&day1.charAt(i)=='C') counter++;
        }
        System.out.print(counter);
    }
    
}
