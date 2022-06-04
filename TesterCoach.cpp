#include<iostream>
#include<algorithm>
#include<vector>
#include<fstream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
	static int  checkCoach=0;
class FootballClub {
	private:
		string idMembers;
		string contractTerm;
	public:
		bool checkDate(int day, int month, int year) {
		switch (month) {
			case 1 :
			case 3:
			case 5 :
			case 7 :
			case 8 :
			case 10 :
			case 12 :
					if(day<1 || day > 31) {
						return false;
					}
					break;
			case 4 :
			case 6 :
			case 9 :
			case 11 :
				if(day < 1 || day > 30) {
					return false;
				}
				break;
			case 2 :
				if (year % 4 == 0) {
  					if (year % 100 == 0) {
   						 if (year % 400 == 0) {
							if(day < 1 || day > 29) {
								return false;
							}
					}else{
						if(day < 1 || day > 28) {
								return false;
					}}
				}else {
						if(day < 1 || day > 29) {
								return false;
							}
				}}else{
						if(day < 1 || day > 28) {
								return false;
				}}
					
				break;
			default :
				return false;
		}
		if(year <= 2022) {
			return false;
		} 
		return true;
		}
		void setMember(string idMembers){
			this->idMembers = idMembers;
		}
		string getMember(string idMembers){
			return this->idMembers;
		}
		void setcontract(string contractTerm){
			this->contractTerm = contractTerm;
		}
		string getcontract(string contractTerm){
			return this->contractTerm;
		}
	FootballClub(){
		this->idMembers = " ";
		this->contractTerm = " ";
	}
	void input(){
		cout<<"Enter the ID.Members: ";
		cin>>this->idMembers;
		for(int i=0;i<=10;i++){
			if(this->idMembers[i]>=97&&this->idMembers[i]<=122)
				this->idMembers[i]-=32;
		}
		cin.ignore();
		cout<<"Enter the ContractTerm(Format DD/MM/YYYY): \n\n";
		int day,month,year;
		do {
			cout << "Day : ";
			cin >> day;
			cout << "Month : ";
			cin >> month;
			cout << "Year : ";
			cin >> year;
		}while(checkDate(day,month,year)==false);
		string sday,smonth,syear;
		sday = to_string(day);
		smonth = to_string(month);
		syear = to_string(year);
		this->contractTerm = sday+'/'+smonth+'/'+syear;
	}
	void output(){
		cout<<"*ID of Members: "<<this->idMembers<<endl;
		cout<<"*Contract Term: "<<this->contractTerm<<endl;
	}
	virtual string mission() = 0;
	virtual long long calculateWage() = 0;
	virtual bool signingCondition() = 0;
	virtual void riskOfTerminateContract() = 0;
	virtual void oppRenewContract() = 0;
};

class Person:public FootballClub  {
	private : 
		int idCardNumber ;
		string fullName ;
		int age ;
		long long salary  ;
	public :
		int getIDCardNumber ()  {
		  return this->idCardNumber ;
		} 
		string getFullName() {
		return this->fullName ;	
		} 
		int getAge() {
			return this->age ;
		} 
		int getSalary() {
			return this->salary ;
		} 
		
		void setIDCardNumber (int ID) {
			this->idCardNumber=ID ;
		} 
		void setFullName (string name) {
			this->fullName=name ;
		} 
		void setAge(float age) {
			this->age=age ;
		} 
		void setSalary(long long salary) {
			this->salary=salary ;
		} 

		Person() {
			this->idCardNumber=0;
			this->fullName="" ;
			this->age=0;
			this->salary=0;
		} 
		
		void input () {
		FootballClub::input() ;
		cout<<"CardNumber :" ;
		cin>>this->idCardNumber ;
		cin.ignore();
		cout << "Nhap vao ten : ";
		getline(cin,this->fullName);
		string s = "";
		stringstream st(fullName);
		string token;
	while(st>>token) {
		s += toupper(token[0]);
		for(int i=1 ; i<token.length() ; i++) {
	   		s += tolower(token[i]);
		}
			s += " ";
	}
		s.erase(s.length()-1);
		fullName=s ;

		cout<<"Age :" ;
		cin>>this->age ;
		cout<<"Salary :" ;
		cin>>this->salary ;
		
		} 
		void output() {
		FootballClub::output() ; 
		cout<<"CardNumber :"<<this->idCardNumber<<"\n";
		cout<<"Full Name :" <<this->fullName<<"\n" ;
		cout<<"Age :" <<this->age<<"\n" ;
		cout<<"Salary :"<<this->salary<<"\n" ;
		
		} 
	   
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Coach : public Person {					
	private :
		int numOfWin ;
		int numOfLose ;
	    int titleNumber ;
	    int experience ; 
	public :
		  int getWins () {
		  	return this->numOfWin ;
		  } 
		  int getLose() {
		  	return this->numOfLose ;
		  } 
		  int getTitle () {
		  	return this->titleNumber ;
		  } 
		  int getExp() {
		  	return this->experience ;
		  } 
      	void setWins (int Wins) {
			this->numOfWin=Wins;
		} 
		void setLoses(int Loses) {
			this->numOfLose=Loses ;
		} 
		void setTitle (int Title) {
			this->titleNumber=Title ;
		} 
		void setExperience (float Exp) {
			this->experience=Exp ;
		} 
		Coach() {
	       this-> numOfWin=0;
	       this->numOfLose=0;
	        this->titleNumber=0;
	    	this->experience =0 ;
		} 
		void input() {
			Person::input() ;
			cout<<"Num of Wins :" ;
			cin>>this->numOfWin ;
			cout<<"Num of Loses :" ;
			cin>>this->numOfLose ;
			cout<<"Number of Titles:" ;
			cin>>this->titleNumber ;
			cout<<"Experience :" ;
			cin>>this->experience ;
			cin.ignore() ;
		} 
		void output() {
			Person::output() ;
			cout<<"Num of Wins :"<<this->numOfWin<<"\t";
			cout<<"Num of Loses :"<<this->numOfLose <<"\t";
			cout<<"Number of Titles:"<<this->titleNumber <<"\t";
			cout<<"Experience :"<<this->experience <<"\t";
  		} 
  		
		string mission () { 
  	    	string mission="Coach and Win matchs" ;
  	    	return mission ;
		} 
		  
		long long  calculateWage() {
			//kn >10 tra them khoang 1000000+ so tran thang ; 
			// thua= -tien khong bonus -
			//dung value bringlastseason;	
			//neu thang nhieu hon thua - tinh so thang va nguoc lai 
			if(this->signingCondition()==true) {
			float calculateWage=5000000*this->numOfWin*100000;
			} 
			if(this->experience<10&&this->numOfWin>this->numOfLose) 
		    float	calculateWage=3500000*this->numOfWin*600000;
			if(this->signingCondition()==false&&numOfWin<this->numOfLose) {
			 float calculateWage=3500000*this->numOfLose-200000;
			}
		}  
		bool signingCondition () {
			if(this->numOfWin>30&&this->experience>5) 
			return true ;
			else  
			return false ;
	       
		} 

		void riskOfTerminateContract() {
			if(this->numOfLose>40) {
				cout<<"Fired:" ;
	
			} 
		}
			
		void oppRenewContract () {
			if(this->numOfWin>30) {
				cout<<"Continue work at club :" ;
			} 
			else 
			cout<<"Khong dap ung duoc yeu cau " ;
	
		} 
}; 
class listCoach:public Coach {
		public :
		void scriptOfCoach() {
			cout << "Enter official coach information  "<<endl; 
		     Coach c ;
			c.input() ;
			c.output() ;
				ofstream fo("E:\\Official_Coach.txt");
			if(fo.is_open()){
				fo<<"-------------------- Coach------------------ "<<endl;
				fo<<"================================================================="<<endl;
			    fo<<"ID.Members: "<<c.getIDCardNumber()<<endl;
				fo<<"Full Name : "<<c.getFullName()<<endl;
				fo<<"Experience: "<<c.getExp()<<endl;
				fo<<"Number of Wins : "<<c.getWins()<<endl;
				fo<<"Number of Loses :"<<c.getLose() <<endl;
				fo<<"Number of Titles :"<<c.getTitle()<<endl;
			fo.close();
		}else
			cout<<"Error!!!!";
		}
		 
};  

int main() {
	listCoach lc ;
	lc.scriptOfCoach();
}
