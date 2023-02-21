/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bai_1;

import java.util.Scanner;

/**
 *
 * @author Administrator
 */
public class timsolonnhat_kodungmang {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n,x,max = 0;
        System.out.println("\n Nhap so phan tu: ");
        n= sc.nextInt();
        for(int i=0;i<n;i++)
        {
            System.out.println("\nSo thu "+ (i+1)+" :");
            x=sc.nextInt();
            if(i==0) max = x;
            else if (x>max) max = x;
        }
        System.out.println("\nSo lon nhat la: "+max);
    }
}
