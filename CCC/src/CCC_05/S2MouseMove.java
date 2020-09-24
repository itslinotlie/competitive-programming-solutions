// 12/16/2019
// https://dmoj.ca/problem/ccc05s2
package CCC_05;

import java.util.*;
import java.io.*;

public class S2MouseMove {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int x=0,y=0;
        int maxX = in.nextInt(), maxY = in.nextInt();
        int tempX = in.nextInt(), tempY = in.nextInt();
        while (!(tempX==0 && tempY==0)) {
            if (x+tempX>=0) {
                if (x+tempX<=maxX) x+=tempX;
                else x=maxX;
            }
            else x=0;
            if (y+tempY>=0) {
                if (y+tempY<=maxY) y+=tempY;
                else y=maxY;
            }
            else y=0;
            System.out.println(x+" "+y);
            tempX=in.nextInt(); tempY=in.nextInt();
        }
    }
}
