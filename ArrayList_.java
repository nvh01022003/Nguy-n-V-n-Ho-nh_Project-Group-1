package b2;

import java.util.ArrayList;
import java.util.Scanner;

public class ArrayList_ {
	ArrayList <Integer> a;
	void sinh(int n)
	{
		a = new <Integer> ArrayList();
		for(int i=0;i<n;i++)
		{
			Integer x = new Integer((int)(Math.random()*100));
			a.add(x);
		}
		
	}
	void xuat()
	{
		for(int i=0;i<a.size();i++)
		{
			System.out.println(" "+a.get(i).toString());
		}
	} 
	int demsole()
	{
		int dem=0;
		for(int i=0;i<a.size();i++)
		{
			if(a.get(i).intValue() % 2 != 0)
				dem++;
		}
		return dem;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList_ a= new ArrayList_();
		a.sinh(10);
		a.xuat();
		System.out.println("\nSo cac so le co trong mang: "+a.demsole());
	}

}
