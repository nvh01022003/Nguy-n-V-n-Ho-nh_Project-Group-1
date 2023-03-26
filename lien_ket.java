package bai1;

import java.util.Scanner;

class node
{
	int data;
	node next;
	node(int x){data =x;next=null;}
	node (int x,node t){data=x;next=t;}
	public String toString() {return data + "-->";}
}
public class lien_ket {
	node head;
	void taonot()
	{
		int x;
		node cuoi = null;
		head =null;
		while(true)
		{
			Scanner sc = new Scanner(System.in);
			System.out.println("\nNhap vao pan tu danh sach(dung nhap nhan 0): ");
			x = sc.nextInt();
			if(x==0) break;
			node t = new node(x);
			if(head == null) {head = cuoi=t;}
			else {
				cuoi.next=t;
				cuoi=t;
			}
		}
	}
	void nhap(int x) {head = new node(x,head);}
	void in()
	{
		System.out.println("\nNoi dung danh sach: ");
		node p=head;
		while(p!= null) {System.out.print(p);p=p.next;}
		System.out.println(" null");
	}
	void them_x_cuoi(int x)
	{
		node t = new node(x);
		if(head==null) {head=t;}
		else {
			node p = head;
			while(p.next!= null) {p=p.next;}
			p.next=t;
		}
	}
	void chen_x_vao_k(int x, int k)
	{
		if(k<1) System.out.println("\nVi tri chen ko hop le !");
		else
		{
			if(k==1) {head = new node(x,head);}
			else
			{
				int vt=1;
				node p= head;
				while(p!=null && vt < k-1) {vt++;p=p.next;}
				if(p==null) {System.out.println("\nko the chen !");}
				else
				{
					node t = new node(x,p.next);
					p.next=t;
				}
			}
		}
	}
	void xoa_not_dautien()
	{
		if (head==null) {System.out.println("\nKO xoa duoc !");}
		else {head=head.next;}
	}
	void xoa_not_cuoicung()
	{
		int dem=0;
		if (head==null) {System.out.println("\nKO xoa duoc !");}
		else
		{
			int vt=0;
			node p=head;
			while(p!=null) {dem++;p=p.next;}
			if(dem==1) head=null;
			else if(dem>1)
			{
				while(p!=null && vt < dem) {p=p.next;}
				p=null;
			}
		}
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		lien_ket m = new lien_ket();
		m.taonot();
		m.in();
		m.xoa_not_cuoicung();
		m.in();
	}

}
