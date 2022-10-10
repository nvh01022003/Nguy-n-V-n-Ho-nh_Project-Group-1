package lab1_4145;

import java.util.Scanner;

abstract class Person {
	protected String code;
	protected String name;
	protected int rank;

	Person(){}
	public Person (String code, String name, int rank){
		this.code = code;
		this.name = name;
		this.rank = rank;
	}
	public String getCode() {
		return code;
	}
	public String getName() {
		return name;
	}
	public int getRank() {
		return rank;
	}
	void nhap()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("\n code: ");
		this.code =sc.nextLine();
		System.out.println("\n name: ");
		this.name =sc.nextLine();
		System.out.println("\n rank: ");
		this.rank =sc.nextInt();
		sc.close();
	}
	public abstract String description();
	public void display() {
		System.out.println("Employee code:" + code);
		System.out.println("Employee name:" + name);
		System.out.println("Rank:" + rank);
	}
}

class Professor extends Person
{
	private String department;

	public String getDepartment() {
		return department;
	}

	public void setDepartment(String department) {
		this.department = department;
	}

	Professor(){}
	Professor(String code, String name, int rank, String d)
	{
		super(code,name,rank);
		this.department=d;
	}
	public  String description() {
		String t="";
		switch(rank)
		{
			case 0: t= t+ "None"; break;
			case 1: t= t+ "Assistant Professor"; break;
			case 2: t= t+ "Asociate Professor"; break;
			case 3: t= t+ "Professor"; break;
			case 4: t= t+ "Assistant Teaching Professor"; break;
			case 5: t= t+ "Asociate Teaching Professor"; break;
			case 6: t= t+ "Teaching Professor"; 
			
		}
		return t;
	}
	void nhap()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("\n department: ");
		this.department =sc.nextLine();
		sc.close();
	}
	public void display() {
		super.display();
		System.out.println("\n Department: "+this.department);
	}
}

class Student extends Person
{
	private String degree_program;
	private int year_of_graduation;
	Student(){}
	Student(String code, String name, int rank, String d,int y){
		super(code,name,rank);
		this.degree_program=d;
		this.year_of_graduation=y;
	}
	
	public String getDegree_program() {
		return degree_program;
	}

	public void setDegree_program(String degree_program) {
		this.degree_program = degree_program;
	}

	public int getYear_of_graduation() {
		return year_of_graduation;
	}

	public void setYear_of_graduation(int year_of_graduation) {
		this.year_of_graduation = year_of_graduation;
	}
	
	@Override
	public String description() {
		String t="";
		switch(rank) {
			case 0: t= t+ "None"; break;
			case 1: t= t+ "Preshman"; break;
			case 2: t= t+ "Sophomore"; break;
			case 3: t= t+ "Junior"; break;
			case 4: t= t+ "Senior"; break;
			case 5: t= t+ "Graduate"; break;
			case 6: t= t+ "Masters Postgraduate"; break;
			case 7: t= t+ "PhD Postgraduate\r\n"; break;
		}
		return t;
	}
	void nhap()
	{
		Scanner sc =new Scanner(System.in);
		System.out.println("\n degree program: ");
		this.degree_program=sc.nextLine();
		System.out.println("\n year of graduation: ");
		this.year_of_graduation=sc.nextInt();
		sc.close();
	}
	public void display() {
		super.display();
		System.out.println("\n degree program: "+this.degree_program);
		System.out.println("\n year of graduation: "+this.year_of_graduation);
	}
}

class PersonList 
{
	Scanner sc =new Scanner(System.in);
	protected Person[] array;
	protected int number_people;
	PersonList(){}
	PersonList(Person []a,int n)
	{
		this.array=a;
		this.number_people=n;
	}
	void nhap()
	{
		System.out.println("\n Nhap vao so luong nguoi: ");
		this.number_people=sc.nextInt();		
	}
	Person[] a = new Person[this.number_people];
	void input()
	{	
		for(int i =0;i<number_people;i++)
		{
			System.out.println("\n 0: Student");
			System.out.println("\n 1: Professor");
			int y = sc.nextInt();
			if(y == 0)
			{
				a[i] = new Student();
				
			}else
			{
				a[i] = new Professor();
				
			}	
			a[i].nhap();
		}		
	}
	void output()
	{
		for(Person x :a)
		{
			x.display();
		}
	}
	int AVERAGE()
	{
		int tong = 0;
		for(int i=0;i<number_people;i++)
		{
			tong = tong + a[i].rank;
		}
		int ave = tong/this.number_people;
		return ave;
	}
	void maxRank()
	{
		int max = 0;
		for(int i=0;i<number_people;i++)
		{
			if(a[i].getRank() > max)
				max = a[i].getRank();
		}
		for(int i=0;i<number_people;i++)
		{
			if(max == a[i].getRank())
			{
				a[i].display();
			}
		}
	}
}
public class bai3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		PersonList p = new PersonList();
		p.nhap();
		p.input();
		p.output();
		System.out.println("\n AVERAGE: "+p.AVERAGE());
		p.maxRank();
	}

}
