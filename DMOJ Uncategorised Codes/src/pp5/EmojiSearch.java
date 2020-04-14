// 11/16/2019
//https://dmoj.ca/problem/emojisearch
package pp5;

import java.util.*;
import java.io.*;

public class EmojiSearch {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        String temp = in.nextLine();
        String arr[] = temp.split("[:]");
        int counter = 0;
        for (int i=0;i<temp.length();i++) {
            if (temp.charAt(i)==':')
                counter++;
        }
        if (counter%2==0) {
            for (int i=1;i<arr.length;i+=2) {
                System.out.println(arr[i]);
            }            
        }
        else {
            for (int i=1;i<=arr.length-2;i+=2) {
                System.out.println(arr[i]);
            }
        }
    }   
}
