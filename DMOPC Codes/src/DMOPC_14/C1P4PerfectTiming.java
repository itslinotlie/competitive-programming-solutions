// 11/21/2019
//https://dmoj.ca/problem/dmopc14c1p4
package DMOPC_14;

import java.util.*;
import java.io.*;

public class C1P4PerfectTiming {
    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int x1=in.nextInt(), y1=in.nextInt(), x2=in.nextInt(), y2=in.nextInt();
        String temp1[]=in.nextLine().split("[:]");
        String temp[]=in.nextLine().split("[:]");
        int arr[] = new int[6];
        for (int i=0;i<6;i++)arr[i]=Integer.parseInt(temp[i]);
        int distance = Math.abs(x1-x2)+Math.abs(y1-y2);
        arr[5]+=distance;
        int remainder, whole;
        if (arr[5]>59) {
            whole = arr[5]/60;
            remainder = arr[5]%60;
            arr[5]=remainder;
            arr[4]+=whole;
        }
        if (arr[4]>59) {
            whole = arr[4]/60;
            remainder = arr[4]%60;
            arr[4]=remainder;
            arr[3]+=whole;
        }
        if (arr[3]>23) {
            whole = arr[3]/24;
            remainder = arr[3]%24;
            arr[3] = remainder;
            arr[2]+=whole;
        }
        if (arr[2]>28) {
            if (arr[1]==2) { //Feb
                if (arr[0]%4==0 && arr[2]>29 && arr[0]%400==0) {//leap year
                    whole = arr[2]/29;
                    remainder = arr[2]%29;
                    arr[2] = remainder;
                    arr[1]+= whole;
                }    
                else if (!(arr[0]%4==0)||arr[0]%100==0){//normal feb
                    whole = arr[2]/28;
                    remainder = arr[2]%28;
                    arr[2] = remainder;
                    arr[1]+=whole;                                 
                }               
            }
            else if (arr[2]>30) {//every other month
                if (arr[2]>31&&arr[1]==1||arr[1]==3||arr[1]==5||arr[1]==7||arr[1]==8||arr[1]==10||arr[1]==12) {
                    whole = arr[2]/31;
                   remainder=arr[2]%31;
                   arr[2]=remainder;
                   arr[1]+=whole;
                }
                else if (arr[2]>30&&arr[1]==2||arr[1]==4||arr[1]==6||arr[1]==9||arr[1]==11){
                    whole = arr[2]/30;
                    remainder=arr[2]%30;
                    arr[2]=remainder;
                    arr[1]+=whole;                    
                }
            }
        }
        if (arr[1]>12) {
            whole = arr[1]/12;
            remainder = arr[1]%12;
            arr[1] = remainder;
            arr[0]+=whole;
        }
        System.out.printf("%4d:%02d:%02d:%02d:%02d:%02d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);   
    }
}