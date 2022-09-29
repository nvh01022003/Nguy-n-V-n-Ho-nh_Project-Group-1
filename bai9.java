package hoanh;

import java.util.Scanner;

abstract class food
{
	private String description;
	private double numOfCalo;
	food(){}
	food(String d, double n)
	{
		this.description=d;
		this.numOfCalo=n;
	}
	abstract double numOfServe(double numOfCalo);
	
	public String getDescription() {
		return description;
	}
	public void setDescription(String description) {
		this.description = description;
	}
	public double getNumOfCalo() {
		return numOfCalo;
	}
	public void setNumOfCalo(double numOfCalo) {
		this.numOfCalo = numOfCalo;
	}
	void input()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("\n description: ");
		this.description=sc.nextLine();
		System.out.println("\n number of calories: ");
		this.numOfCalo=sc.nextDouble();
	}
	void output()
	{
		System.out.println("\n description: "+this.description+", Number of calories: "+this.numOfCalo);
	}
	
}
class liquid_food extends food
{
	private String viscosity;
	liquid_food(){}
	liquid_food(String d, double n, String v)
	{
		super(d,n);
		this.viscosity=v;
	}
	void input()
	{
		Scanner sc=new Scanner(System.in);
		super.input();
		System.out.println("\n viscosity: ");
		this.viscosity=sc.nextLine();
	}
	void output()
	{
		super.output();
		System.out.println("\n viscosity: "+this.viscosity);
		System.out.println("\n Number of Serving: "+this.numOfServe(getNumOfCalo()));
	}
	@Override
	double numOfServe(double numOfCalo) {
		return this.getNumOfCalo();
	}
	
}
class fruit extends food
{
	private String season;
	fruit(){}
	fruit(String d, double n, String s)
	{
		super(d,n);
		this.season=s;
	}
	@Override
	double numOfServe(double numOfCalo) {
		return this.getNumOfCalo();
	}
	void input()
	{
		Scanner sc=new Scanner (System.in);
		super.input();
		System.out.println("\n season: ");
		this.season=sc.nextLine();
	}
	void output()
	{
		super.output();
		System.out.println("\n Season: "+this.season);
		System.out.println("\n Number of Serving: "+this.numOfServe(getNumOfCalo()));
	}
	
	
}
public class bai9 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		System.out.println("\n liquid food ");
		liquid_food l = new liquid_food();
		l.input();
		l.output();
		System.out.println("\n=================================================================");
		System.out.println("\n Fruit ");
		fruit f = new fruit();
		f.input();
		f.output();
	}

}
