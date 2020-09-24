// 12/26/2019
// https://dmoj.ca/problem/coci06c5p2
package COCI_06;

import java.util.*;
import java.io.*;

public class C5P2Natrij {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        String arr1[] = in.nextLine().split("[:]"); int one = Integer.parseInt(arr1[0])*3600+Integer.parseInt(arr1[1])*60+Integer.parseInt(arr1[2]);
        String arr2[] = in.nextLine().split("[:]"); int two = Integer.parseInt(arr2[0])*3600+Integer.parseInt(arr2[1])*60+Integer.parseInt(arr2[2]);
        if (one > two) two+= 24*60*60;
        int time = two-one;
        int hour = time/3600; int min = (time-hour*3600)/60; int second = time-hour*3600-min*60;
        if (hour==0&&min==0&&second==0) System.out.println("24:00:00");
        else System.out.printf("%02d:%02d:%02d", hour, min, second);
    }
}
