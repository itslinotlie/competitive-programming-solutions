// 10/30/19
// https://dmoj.ca/problem/ccc03s1
package CCC_03;

import java.util.*;
public class S1SnakesAndLadders {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int counter = 1, temp = in.nextInt();
        boolean zero = false;
        while (counter < 100) {
            if (temp == 0) {
                zero = true;
                break;
            }
            if (temp < 2 || temp > 12) {}
            else if ((counter + temp) > 100) {}
            else {
                counter += temp;
                if (counter == 54) counter = 19;
                if (counter == 90) counter = 48;
                if (counter == 99) counter = 77;
                if (counter == 9) counter = 34;
                if (counter == 40) counter = 64;
                if (counter == 67) counter = 86;                 
            }
            if (counter == 100) {
                System.out.println("You are now on square 100");
                break;
            }            
            System.out.println("You are now on square "+counter); 
            temp = in.nextInt();            
        }
        if (zero == true) System.out.println("You Quit!");
        else System.out.println("You Win!");
    }   
}