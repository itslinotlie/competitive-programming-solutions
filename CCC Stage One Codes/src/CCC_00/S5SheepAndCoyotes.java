// 01/22/2020
//https://dmoj.ca/problem/ccc00s5
package CCC_00;

import java.util.*;
import java.io.*;

public class S5SheepAndCoyotes {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        ArrayList<Double> listX = new ArrayList<>();
        ArrayList<Double> listY = new ArrayList<>();
        
        int n = in.nextInt();
        Point sheep[] = new Point[n];
        for (int i=0;i<n;i++) sheep[i] = new Point(in.nextDouble(), in.nextDouble());
        
        for (double i=0;i<=1001;i+=0.01) {
            double arr[] = new double[n], diff1 = Double.MAX_VALUE;
            int index = 0;
            for (int j=0;j<n;j++) {
                double temp = findDifference(sheep[j], i);
                arr[j] = temp;
                if (diff1 > arr[j]) {
                    diff1=arr[j];
                    index=j;
                }
            }
            if (!listX.contains(sheep[index].x) || !listY.contains(sheep[index].y)) {
                listX.add(sheep[index].x);
                listY.add(sheep[index].y);
            }
        }
        Iterator itrX = listX.iterator(), itrY = listY.iterator();
        while (itrX.hasNext()) { //The sheep at (100.00, 100.00) might be eaten.
            System.out.printf("The sheep at (%.2f, %.2f) might be eaten.\n", itrX.next(), itrY.next());
        }
    }
    static double findDifference(Point p, double cur) {
        return Math.sqrt(Math.pow(p.x-cur, 2)+Math.pow(p.y, 2));
    }
    static class Point {
        double x, y;
        Point (double a, double b) {x=a;y=b;}
    }
}