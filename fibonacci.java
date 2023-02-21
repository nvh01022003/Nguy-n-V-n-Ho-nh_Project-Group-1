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
public class fibonacci {
    long fib(int n)
        {
            if(n==0||n==1) return 1;
            else return fib(n-1) + fib(n-2);                
        }
    public static int main(String[] args)
    {
        fibonacci m = new fibonacci();
        int n=20;
        System.out.println("\nSo tho tren dao thang thu "+n+" = "+m.fib(n));
        return 0;
        
    } 
}
