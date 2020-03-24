// 01/22/2020
package CCC_00;

import java.util.*;
import java.io.*;

public class S5SheepAndCoyotes {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        //Point eaten[] = new Point[100]; 
        ArrayList<Double> listX = new ArrayList<>();
        ArrayList<Double> listY = new ArrayList<>();
        
        int n = in.nextInt();
        Point sheep[] = new Point[n];
        for (int i=0;i<n;i++) {
            sheep[i] = new Point(in.nextDouble(), in.nextDouble());
        }
        
        
        for (double i=0;i<=1001;i+=0.01) {
            double diff1 = Double.MAX_VALUE;
            int index = 0;
           
            double arr[] = new double[n];
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
//
//            
//                if (temp <= diff1 && (!listX.contains(sheep[j].x) || !listY.contains(sheep[j].y)) ) {
//                    diff1 = temp;
////                    listX.clear(); listY.clear();
//                    listX.add(sheep[j].x);
//                    listY.add(sheep[j].y);
//                }
//                else if (temp == diff) {
//                    listX.add(sheep[j].x);
//                    listY.add(sheep[j].y);                
//                }                
            //}
        }
//        System.out.println(listX.size());
        Iterator itrX = listX.iterator();
        Iterator itrY = listY.iterator();
        while (itrX.hasNext()) { //The sheep at (100.00, 100.00) might be eaten.
            System.out.print("The sheep at (");
            System.out.printf("%.2f", itrX.next());
            System.out.print(", ");
            System.out.printf("%.2f", itrY.next());
            System.out.println(") might be eaten.");
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
