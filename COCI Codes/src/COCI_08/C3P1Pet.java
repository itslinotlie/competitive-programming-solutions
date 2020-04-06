// 11/18/2019
//https://dmoj.ca/problem/coci08c3p1
package COCI_08;

import java.util.*;
import java.io.*;

public class C3P1Pet {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int arr[] = new int[5];
        for (int i=0;i<5;i++) {arr[i] = in.nextInt()+in.nextInt()+in.nextInt()+in.nextInt();}
        List <Element> temp = new ArrayList<>();
        for (int i=0;i<arr.length;i++) temp.add(new Element(i, arr[i]));
        Collections.sort(temp); Collections.reverse(temp);
        temp.remove(4);temp.remove(3);temp.remove(2);temp.remove(1);
        temp.forEach((element) -> {
            System.out.println(element.index + " " + element.value);
        });

    }
    static class Element implements Comparable<Element> {
        public int index, value;
        Element (int index, int value) {
            this.index = index+1;
            this.value = value;
        }
        public int compareTo(Element e) {
            return this.value - e.value;
        }
    }
}
