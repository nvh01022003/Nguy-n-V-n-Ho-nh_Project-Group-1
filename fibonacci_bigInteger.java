/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bai_1;

import java.math.BigInteger;

/**
 *
 * @author Administrator
 */
public class fibonacci_bigInteger {
    BigInteger fib3(int n)
    {
        BigInteger f0,f1,f2;
        f0= BigInteger.ONE; f1= BigInteger.ONE;
        for(int i=2;i<=n;i++)
        {
            f2=f1.add(f0); f0=f1; f1=f2;
        }
        return f1;
    }
    public static void main(String[] args)
    {
        fibonacci_1 m = new fibonacci_1();
        int n = 10;
        System.out.println("\nSo tho tren dao than ki sau than thu "+n+" = "+m.fib3(n));
    }   
}
