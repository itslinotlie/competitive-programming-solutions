// 11/31/19
// https://dmoj.ca/problem/wac2p1
package WAC_2;

import java.util.Scanner;

public class OCT31DEC25 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String word = in.next();
        switch (word) {
            case "Saturday":
                System.out.println("Sunday");
                break;
            case "Sunday":
                System.out.println("Monday");
                break;
            case "Monday":
                System.out.println("Tuesday");
                break;
            case "Tuesday":
                System.out.println("Wednesday");
                break;
            case "Wednesday":
                System.out.println("Thursday");
                break;
            case "Thursday":
                System.out.println("Friday");
                break;
            case "Friday":
                System.out.println("Saturday");
                break;
        }
    }   
}
