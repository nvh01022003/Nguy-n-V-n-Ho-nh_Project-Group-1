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
public class fibonacci_tietkiembonho {
    long fib2(int n)
    {
        long f0=1,f1=1,f2;
        for(int i=2;i<=n;i++)
        {
            f2=f1+f0;
            f0=f1;
            f1=f2;
            return f1;
        }
        return 0;
    }    
    public static void main(String[] args)
    {
        fibonacci_1 m = new fibonacci_1();
        int n = 10;
        System.out.println("\nSo tho tren dao than ki sau than thu "+n+" = "+m.fib1(n));
    }   
}
