/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bai_1;

/**
 *
 * @author Administrator
 */
public class fibonacci_1 {
   
        long fib1(int n)
        {
            long[]f;
            f= new long[n+1];
            f[0]= f[1]=1;
            for(int i =2;i<= n;i++) f[i]=f[i-1]+f[i-2];
            return f[n];
        }
     public static void main(String[] args)
    {
        fibonacci_1 m = new fibonacci_1();
        int n = 10;
        System.out.println("\nSo tho tren dao than ki sau than thu "+n+" = "+m.fib1(n));
    }    
}
