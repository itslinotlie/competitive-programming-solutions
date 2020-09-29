// 11/30/2019
// https://dmoj.ca/problem/gfssoc1j4

import java.util.*;
import java.io.*;

public class gfssoc1j4 {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        char arr[][] = new char[3][3];
        for (int i=0;i<3;i++) {
            String temp = in.nextLine();
            for (int j=0;j<3;j++) arr[i][j] = temp.charAt(j);
        }
        boolean x = false, o = false;
        for (int i=0;i<3;i++) { //L->R
            if (arr[i][0]==arr[i][1]&&arr[i][1]==arr[i][2]) {
                if (arr[i][0]=='X') x=true;
                else o=true;
            }  //U->D
            if (arr[0][i]==arr[1][i]&&arr[1][i]==arr[2][i]) {
                if (arr[0][i]=='X') x=true;
                else o=true;
            }
        }
        if (arr[0][0]==arr[1][1] &&arr[1][1]==arr[2][2]) {
            if (arr[0][0]=='X') x=true;
            else o=true;
        }     
        if (x&&o) System.out.println("Error, redo");
        else if (x) System.out.println("Timothy");
        else if (o) System.out.println("Griffy");
        else System.out.println("Tie");
    }
}