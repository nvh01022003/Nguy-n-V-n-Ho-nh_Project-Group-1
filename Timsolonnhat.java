/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bai_1;

import static java.time.Clock.system;
import java.util.Scanner;

/**
 *
 * @author Administrator
 */
public class Timsolonnhat {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int []a;
        int n, max = 0;
        System.out.println("\n Nhap so phan tu cua mang: ");
        n= sc.nextInt();a= new int [n];
        for(int i=0;i<n;i++)
        {
            System.out.println("Nhap so thu "+ (i+1)+" :");
            a[i] = sc.nextInt();
        } 
        
        max = a[0];
        for(int i=0;i<n;i++)   if(a[i] > max)  max=a[i];
        System.out.println("\nSo lon nhat la: "+ max);
        
    }
}
