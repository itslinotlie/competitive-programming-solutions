// 11/22/2019
//https://dmoj.ca/problem/pwindsor18p5
package pp5;

import java.util.*;
import java.io.*;
import java.math.BigInteger;

public class MathDepression {
    public static BigInteger ans (int a, int b) {
        BigInteger temp = new BigInteger("1");
        for (int i=0;i<a;i++) temp = temp.multiply(BigInteger.valueOf(3));
        for (int i=0;i<b;i++) temp = temp.multiply(BigInteger.valueOf(2));
        temp = temp.mod(BigInteger.valueOf((long)Math.pow(10,9)+7));
        return temp;
    }
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt(), three,two;
        if (a%3 == 1) {
            three = (a-3)/3; 
            two =  2;
        }
        else if (a%3==2){
            three = a/3;
            two = 1;
        }
        else {
            three=a/3;
            two=0;
        }
        System.out.println(ans(three,two));
    }
}