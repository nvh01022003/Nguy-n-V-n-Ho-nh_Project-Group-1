package hoanh;

import java.util.Scanner;
abstract class number
{
	abstract void add();
	abstract void subtract();
	abstract void multifly();
	abstract void divide();
}
class fraction extends number
	{
	private int tu1, mau1;
	private int tu2, mau2;
	fraction(){}
	fraction (int t1, int m1, int t2, int m2)
	{
		this.tu1=t1;
		this.mau1=m1;
		this.tu2=t2;
		this.mau2=m2;
	}	
void input() {
	Scanner sc=new Scanner(System.in);
	System.out.println("\n Tu 1: ");
	this.tu1=sc.nextInt();
	System.out.println("\n Mau 1: ");
	this.mau1=sc.nextInt();
	System.out.println("\n Tu 2: ");
	this.tu2=sc.nextInt();
	System.out.println("\n Mau 2: ");
	this.mau2=sc.nextInt();
}
void output()
{
	System.out.println("\n Phan so 1: "+ this.tu1+"/"+this.mau1);
	System.out.println("\n Phan so 2: "+ this.tu2+"/"+this.mau2);
}

public int getTu1() {
	return tu1;
}
public void setTu1(int tu1) {
	this.tu1 = tu1;
}
public int getMau1() {
	return mau1;
}
public void setMau1(int mau1) {
	this.mau1 = mau1;
}
public int getTu2() {
	return tu2;
}
public void setTu2(int tu2) {
	this.tu2 = tu2;
}
public int getMau2() {
	return mau2;
}
public void setMau2(int mau2) {
	this.mau2 = mau2;
}

@Override
void add() {
	int tuu,mauu;
	tuu=tu1*mau2+tu2*mau1;
	mauu=mau1*mau2;
	System.out.println("\n ADD: "+tuu+"/"+mauu);
}
@Override
void subtract() {
	int tuu,mauu;
	tuu=tu1*mau2-tu2*mau1;
	mauu=mau1*mau2;
	System.out.println("\n substract: "+ tuu+"/"+mauu);
}
@Override
void multifly() {
	int tuu,mauu;
	tuu=tu1*tu2;
	mauu=mau1*mau2;
	System.out.println("\n MULTIFLY: "+ tuu+"/"+mauu);
}	
@Override
void divide() {
	int tuu, mauu;
	tuu=tu1*mau2;
	mauu=mau1*tu2;
	System.out.println("\n DIVIDE: "+tuu+"/"+mauu);
}
}
class complex extends number
{
	private int a1, a2,b1, b2;
	complex(){}
	complex(int a,int b,int c,int d)
	{
		this.a1=a;
		this.a2=b;
		this.b1=c;
		this.b2=d;
	}
	void input() {
		Scanner sc=new Scanner(System.in);
		System.out.println("\n Thuc 1: ");
		this.a1=sc.nextInt();
		System.out.println("\n ao 1: ");
		this.b1=sc.nextInt();
		System.out.println("\n Thuc 2: ");
		this.a2=sc.nextInt();
		System.out.println("\n ao 2: ");
		this.b2=sc.nextInt();
	}	
	void output()
	{
		System.out.println("\n so phuc 1: "+this.a1+" + "+this.b1+"*i");
		System.out.println("\n so phuc 2: "+this.a2+" + "+this.b2+"*i");
	}
	@Override
	void add() {
		int thuc, ao;
		thuc=a1+a2;
		ao=b1+b2;
		System.out.println("\n ADD: "+thuc+" + "+ao+"*i");
	}
	@Override
	void subtract() {
		int thuc,ao;
		thuc=a1-a2;
		ao=b1-b2;
		System.out.println("\n SUBSTRACT: "+thuc+" + "+ao+"*i");
	}
	@Override
	void multifly() {
		int thuc, ao;
		thuc=a1*a2-b1*b2;
		ao=a1*b2+a2*b1;
		System.out.println("\n MULTIFLY: "+thuc+" + "+ao+"*i");
	}
	@Override
	void divide() {
		int thuc,ao;
		thuc=(a1*b1+a2*b2)/(a1*a1+b1*b1);
		ao=(a1*b2-a2*b1);
		System.out.println("\n divide: "+thuc+" + "+ao+"*i");
	}
}
public class bai8
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		fraction f = new fraction();
		f.input();
		f.output();
		f.add();
		f.subtract();
		f.multifly();
		f.divide();
		complex c = new complex();
		c.input();
		c.output();
		c.add();
		c.subtract();
		c.multifly();
		c.divide();
	}
}







