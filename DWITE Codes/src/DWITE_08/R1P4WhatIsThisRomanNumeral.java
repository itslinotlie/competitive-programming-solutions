// 12/14/2019
//https://dmoj.ca/problem/dwite08c1p4
package DWITE_08;

import java.util.*;
import java.io.*;

public class R1P4WhatIsThisRomanNumeral {
    static int[] getValue (String arr[]) {
        int array[] = new int[arr.length];
        for (int i=0;i<arr.length;i++) {
            switch(arr[i]){
                case "I": array[i]=1; break;
                case "V": array[i]=5; break;
                case "X": array[i]=10; break;
                case "L": array[i]=50; break;
                case "C": array[i]=100; break;
                case "D": array[i]=500; break;
                case "M": array[i]=1000; break;
            }          
        }
        return array;
    }
    static int getNumber (String n) {
        String array[] = new String[n.length()];
        int arr[] = new int[n.length()], value=0;
        for (int i=0;i<array.length;i++) array[i] = Character.toString(n.charAt(i));
        arr = getValue(array);
        
        for (int i=0;i<arr.length;i++) {
            if (i==arr.length-1) {
                if (arr.length==1) value=arr[i];
                else if (arr[i]<=arr[i-1]) value+=arr[i];
            }
            else {
                if (arr[i]>=arr[i+1]) value+=arr[i];
                else {
                    value+= (arr[i+1]-arr[i]);
                    i++;
                }                
            }
        }
        return value;
        
    }
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        for (int t=0;t<5;t++) {
            String word = in.nextLine();
            System.out.println(getNumber(word));
        }
    }
}
