package newpackage;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
import java.util.*;
/**
 *
 * @author Administrator
 */
public class Buoi_2_bai_1 {
    int []A;
    void nhapmang(){
        Scanner sc = new Scanner(System.in);
        System.out.println("\nNhap vao so phan tu cua mang: ");
        int n=sc.nextInt();   A= new int[n];
        for(int i=0;i<n;i++)
        {
            System.out.println("\nSo thu "+(i+1)+" :");
            A[i]=sc.nextInt();
        }    
    }
    void sinhmang(int n){
        Random rd = new Random(1);
        A = new int[n];
        for(int i=0;i<n;i++)
        {
            A[i]= Math.abs(rd.nextInt())%1000;
        }
    }
    void inmang(){
        System.out.println("\nNoi dung mang: ");
        for(int i=0;i<A.length;i++)
        {
            System.out.println(A[i]+ "");
        }    
    }
    void giai1(int x){
        //Sap xep mang
        for(int i=0;i<A.length;i++)
        {
            for(int j=i+1;j<A.length;j++){
                if( A[i] > A[j]){
                    int t = A[i];
                    A[i]=A[j];
                    A[j]=t;
                }
            }
        }   
        //So sanh
        int vt=1;
        for(int i=0;i<A.length;i++){
            if(A[i] < x) vt++;
            else break;
        }
        System.out.println("\n Vi tri cua x neu nhu o trong day sap xep la: "+vt);
    }
    void giai2(int x)
    {
        int vt =1 ;
        for(int i=0;i<A.length;i++)
        {
            if(A[i] < x ) vt++;
        }
        System.out.println("\nVi tri cua x neu nhu o trong day sap xep la: "+vt);
    }    
    public static void main(String []args)
    {
        Buoi_2_bai_1 b = new Buoi_2_bai_1();
        b.sinhmang(1000);
  //      b.nhapmang();
 //       b.inmang();
 //       b.giai(15);
        b.giai2(15);
    } 
}
