package btvn;


import java.util.Scanner;

abstract class Person{
	protected String code;
	protected String name;
	protected int rank;
	public Person() {}
	public Person (String code, String name, int rank){
		this.code = code; this.name = name; this.rank = rank;
	}
	public String getCode() { return code; 	}
	public String getName() { return name;	}
	public int getRank() { 	return rank; 	}
	public void display() {
		System.out.println("Employee code:" + code);
		System.out.println("Employee name:" + name);
		System.out.println("Rank:" + rank);
	}
	public abstract String description();
	void nhap() {
		Scanner kb= new Scanner(System.in);
		System.out.println("nhap ma so:"); code= kb.next();
		System.out.println("nhap ten:"); name= kb.nextLine();
		System.out.println("nhap rank:"); rank= kb.nextInt();
	}
	public abstract int gettype();
}
class Student extends Person
{
	String DP; int YoG;
	Student() {}
	Student(String code, String name, int rank, String DP1, int YoG1 ) {
		super(code, name, rank);
		DP=DP1; YoG= YoG1;
	}
	public int gettype() { return 1;}
	public void display() {
		super.display();
		System.out.println(" CT: " + DP + " Nam tot nghiep "+ YoG);
	}
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
	void nhap() {
		Scanner kb= new Scanner(System.in);
		super.nhap();
		System.out.println("nhap chuong trinh hoc:"); DP= kb.nextLine();
		System.out.println("nhap nam tot nghiep:"); YoG= kb.nextInt();
	}
}
class Professor extends Person
{
	String department;
	 Professor(String code, String name, int rank, String D1 ) {
		super(code, name, rank);
		department=D1; 
	}
	Professor(){}
	public void display() {
		super.display();
		System.out.println(" Khoa cong tac: " + department);
	}
	public String description() {
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
	void nhap() {
		Scanner kb= new Scanner(System.in);
		super.nhap();
		System.out.println("Khoa cong tac:"); department= kb.nextLine();
	}
	public int gettype() { return 2;}
}
public class PersonList {
	Person []a;
	int n;
	void nhap() {
		Scanner kb= new Scanner(System.in);
		System.out.println(" nhap so nguoi:"); n= kb.nextInt();
		a= new Person[n];
		for(int i=0; i<n; i++)
		{
			System.out.println("nhap nguoi thu " + (n+1)+ ":");
			System.out.print("nhap SV(0) hay GS(<>0):");
			int tl= kb.nextInt();
			Person x;
			if(tl==0)  a[i]= new Student(); else a[i] = new Professor();
			a[i].nhap();
		}
	}
	void in() {
		for(Person x:a) x.display();
	}
	double tbRank()
	{
		double k=0;
		for(Person x:a) k+=x.getRank();
		return k/n;
	}
	void tim_maxRank()
	{
		int v=n-1;
		for(int i=n-2; i>=0; i++)
			if(a[i].getRank()>a[v].getRank()) v=i;
		System.out.println("\n Nguoi co thu hang cao nhat o vi tri " +v);
		a[v].display();
	}
	void remove(String code)
	{
		int co=0;
		for(Person x:a) 
			if(x.getCode().compareTo(code)==0) {co=1; break;}
		if(co==0) System.out.println("\n Khong co nguoi co code =" + code + "trong danh sach" );
		else
		{
			int v=0;
			Person []b = new Person[n-1];
			for(int i=0;i<n;i++ )
				if(a[i].getCode().compareTo(code)==0);
				else { 
						if(a[i].gettype()==1) b[v] = new Student(); 
						else b[v] = new Professor();
						b[v++] = a[i];
					 }
			n--; a=b;
			System.out.println("\n Da xoa xong!");
		}
	}
	public static void main(String[] args) {
		PersonList m= new PersonList();
		m.nhap(); m.in();
		System.out.println("\n Trung binh rank = " + m.tbRank());
		m.tim_maxRank();
		m.remove("0123");
		System.out.println("\n Danh sach sau khi tim xoa:"); m.in();
	}

}
