// 01/31/19
// https://dmoj.ca/problem/nccc6j1
package MOCK_19;

import java.util.Scanner;

public class nccc6j1 {
    public static void main(String[] args) { 
        Scanner input = new Scanner(System.in);
        int A,B;
        
        A = input.nextInt();
        B = input.nextInt();
        
        if(A>B)
            System.out.println("CS452");
        else if (B>A)
            System.out.println("PHIL145");
        else if (B==A) 
            System.out.print("");   
    }
}