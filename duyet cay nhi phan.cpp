#include<bits/stdc++.h>
using namespace std;

struct TNode
{
	int data;
	TNode *left, *right;
	TNode (int x) {
		data =x;left=right=NULL;
	}
	TNode(int x,TNode *ll,TNode *rr){
		data =x;left=ll;right=rr;
	}
};

class MyBinaryTree {

	TNode *root;
	public: 
	
		void duyet1(TNode *T) {
	        if(T != NULL)  {
	            cout<<T->data<<" ";duyet1(T->left);duyet1(T->right);
	        }
    	}
	    void duyettientu() { 
			if(root == NULL) cout<<"\n Cay rong !---------\n\t";
			else{
				cout<<"\n ---------Duyet cau theo thuat toan tien tu: \n";
				duyet1(root);cout<<"\n";
			}
		} 
    	
    	void duyet2(TNode *T) {
	        if(T != NULL)  {
	        	duyet2(T->left);cout<<T->data<<" ";duyet2(T->right);
	        }
    	}
    	void duyettrungtu() { if(root == NULL) cout<<"\n Cay rong !---------\n\t";
			else{
				cout<<"\n ---------Duyet cau theo thuat toan trung tu: \n";
				duyet2(root);cout<<"\n";
			} 
		}
    	
    	void duyet3(TNode *T) {
	        if(T != NULL)  {
	            duyet3(T->left);duyet3(T->right);cout<<T->data<<" ";
	        }
    	}
    	void duyethautu() { 
    		if(root == NULL) cout<<"\n Cay rong !---------\n\t";
			else	{
				cout<<"\n ---------Duyet cau theo thuat toan hau tu: \n";
				duyet3(root);cout<<"\n";
			} 
		}
    	
    	void taocayT1() 
		{
			TNode *a = new TNode(10, new TNode(8), new TNode(12));
			TNode *b = new TNode(20, new TNode(16), new TNode(25));
			root= new TNode (15, a, b);
		}

		void taocayT2()
		{
			TNode *a = new TNode(7,new TNode(2),new TNode(6,new TNode(5),new TNode(11)));
			TNode *b = new TNode(5,NULL,new TNode(9,new TNode(4),NULL));
			root  = new TNode(2,a,b);
		}
		
		//Tính tổng các nốt trong cây
		int tong(TNode *T)
	    {
	        if(T==NULL) return 0;
	        else return T->data + tong(T->left) + tong(T->right);
	    }
	    int tong() { return tong(root);}
	    
	    int dem(TNode *T)
	    {
	    	int count = 0;
	        if(T==NULL) return 0;
	        else 
	        {
	        	if (T->left == NULL && T->right == NULL)
	        	count++;
			}
	    }
	    int tong() { return tong(root);}
	    
	    //Tính tổng các nốt le trong cây
		int tong(TNode *T)
	    {
	        if(T==NULL) return 0;
	        else return T->data + tong(T->left) + tong(T->right);
	    }
	    int tong() { return tong(root);}
	    
	    //
	    int dl(TNode *T)
	    {
	    	if(T == NULL) return 0;
	    	else
	    		if(T->left == NULL && T->right == NULL) return 1;
	    		else return dl(T->left) + dl(T->right);
 		}
 		int dl() { return dl(root); }
	    
	    // Kiểm tra cây có nốt giá trị bằng x không
	    int timx(int x,TNode *T)
	    {
	    	if(T == NULL) return 0;
	    	else 
	    	{
	    		if (T->data == x) return 1;
	    		else if(timx(x,T->left) == 0 ) return timx(x,T->right);
	    		else return 1;
			}
		}
		int timx(int x){return timx(x,root);}
	    // duyet cay theo chieu rong
	    void chieurong()    {
	        Queue <TNode *> Q ;
	        if(root!=null) Q.push(root);else {cout<<"Cay rong";return;}
	        while(! Q.empty())  {
	            TNode *x= Q.front();  Q.pop();cout<<x->data<<" ";
	            if(x->left!=NULL) Q.push(x->left);
	            if(x->right!=NULL) Q.push(x->right);
	        }
 		}	  
};
int main() {
        MyBinaryTree T;
        T.taocayT1();
        T.duyettientu();
        T.duyettrungtu();
        T.duyethautu();
        cout<<"\nTong = "<<T.tong();
}



