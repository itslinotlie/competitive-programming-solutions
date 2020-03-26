// 11/16/2019
//https://dmoj.ca/problem/ccc12j1
package CCC_12;

import java.util.*;
import java.io.*;

public class J1SpeedFinesAreNotFine {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt(), b = in.nextInt();
        if (b-a <= 1) System.out.println("Congratulations, you are within the speed limit!");
        else if (b-a <=20) System.out.println("You are speeding and your fine is $100.");
        else if (b-a <=30) System.out.println("You are speeding and your fine is $270.");
        else  System.out.println("You are speeding and your fine is $500.");
    }
}
