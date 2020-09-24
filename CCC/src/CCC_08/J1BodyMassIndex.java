// 11/23/2019
//https://dmoj.ca/problem/ccc08j1
package CCC_08;

import java.util.*;
import java.io.*;

public class J1BodyMassIndex {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        double w = in.nextDouble(), h = in.nextDouble();
        if (w/(h*h) > 25) System.out.println("Overweight");
        else if (w/(h*h) < 18.5) System.out.println("Underweight");
        else System.out.println("Normal weight");
    }
}
