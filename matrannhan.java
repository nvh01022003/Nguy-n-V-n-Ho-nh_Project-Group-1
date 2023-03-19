package matran;

import java.util.Random;
import java.util.Scanner;

public class matrannhan {
	int [][]a;
	int n;
	int m;
	void nhap()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("\nSo hang: ");
		m=sc.nextInt();
		System.out.println("\nSo cot: ");
		n=sc.nextInt();
		a = new int[m][n];	
		Random rd = new Random();
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				a[i][j] =Math.abs(rd.nextInt())%10;
			}
		}
		
	}
	void xuat()
	{
		System.out.println("\nMang : ");
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				System.out.format("%5d",a[i][j]);
			}
			System.out.println("\n");
		}
	}
	matrannhan nhan(matrannhan B)
	{
		if(this.n!=B.m)
		{
			System.out.println("KO nhan duoc day ma tran nay !");
			return new matrannhan();
		}
		else
		{
			matrannhan C = new matrannhan();
			C.a = new int [m][B.n];
			C.m=m;
			C.n=B.n;
			for(int i=0;i<m;i++)
				for(int j=0;j<B.n;j++)
				{
					int t=0;
					for(int k=0;k<n;k++)
						t += a[i][k] * B.a[k][j];
					C.a[i][j]=t;
				}
			return C;
		}
		
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		matrannhan A= new matrannhan();
		matrannhan B= new matrannhan();
		matrannhan C= new matrannhan();
		A.nhap();
		B.nhap();
		C =A.nhan(B);
		A.xuat();
		B.xuat();
		C.xuat();
		
		
	}

}
