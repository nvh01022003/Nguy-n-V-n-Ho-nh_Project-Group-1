#include<iostream>
#include<algorithm>
#include<vector>
#include<fstream> 
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

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
		string getMember(){
			return this->idMembers;
		}
		void setcontract(string contractTerm){
			this->contractTerm = contractTerm;
		}
		string getcontract(){
			return this->contractTerm;
		}
	FootballClub(){
	
	} 
	FootballClub(string idMembers,string contractTerm ) {
		this->idMembers=idMembers ;
		this->contractTerm=contractTerm;
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
//	virtual string mission() = 0;
//	virtual long long calculateWage() = 0;
//	virtual bool signingCondition() = 0;
//	virtual void riskOfTerminateContract() = 0;
//	virtual void oppRenewContract() = 0;
//	virtual bool valueBringingLastSeason() = 0;
};
class Person : public FootballClub {
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
		
		}  
		Person(string idMembers,string contractTerm,int idCardNumber,string fullName,int age,long long salary) : FootballClub(idMembers,contractTerm){
			this->idCardNumber=idCardNumber;
			this->fullName=fullName ;
			this->age=age ;
			this->salary=salary ;
			
		}
		string chuanHoaTen(string name) {
			string s = "";
			stringstream st(name);
			string token;
			while(st>>token) {
			s += toupper(token[0]);
			for(int i=1 ; i<token.length() ; i++) {
				s += tolower(token[i]);
			}
			s += " ";
			}
			s.erase(s.length()-1);
			name = s;
			return name;
		}
		
		void input () {
			FootballClub::input() ;
			cout<<"\nCardNumber : " ;
			cin>>this->idCardNumber;
			cin.ignore();
			cout<<"\nFull name : " ;
			getline(cin,this->fullName) ;
			this->setFullName(this->chuanHoaTen(this->fullName));
			cout<<"\nAge : " ;
			cin>>this->age ;
			cout<<"\nSalary : " ;
			cin>>this->salary ;
		} 
		void output() {
			FootballClub::output() ; 
			cout<<"\nCard Number : "<<this->idCardNumber<<"\n";
			cout<<"\nFull Name : " <<this->fullName <<"\n" ;
			cout<<"\nAge : " <<this->age<<"\n" ;
			cout<<"\nSalary : "<<this->salary<<"\n" ;
		} 
		
	   
}; 
class Player:public Person
{
	private:
		int numberOfShirt; // So ao dau
		int Appearance; // So lan tham gia tran dau
		int numOfYellowCard; // So the vang
		int numOfRedCard; // So the do
		int techniqueStat; // Chi so ki thuat
		int assistNumInSeason; // So luong kien tao trong 1 mua
		int goalsNumInSeason; // SO luong ban thang trong 1 mua
		float height; // Chieu cao
		float weight; // Can nang
		string injury; // Loai chan thuong
		string position; // vi tri
	public:
		void setInjury(string injury){
			this->injury = injury;
		}
		string getInjury(){
			return this->injury;
		}					
		void setPosition(string position)
		{
			this->position = position;
		}	
		string getPosition()
		{
			return this->position;
		}
		void setNumberOfShirt(int numberOfShirt){
			this->numberOfShirt = numberOfShirt;
		}			
		int getNumberOfShirt(){
			return this->numberOfShirt;
		}			
		void setAppearance(int Appearance){
			this->Appearance = Appearance;
		}			
		int getAppearance(){
			return this->Appearance;
		}			
		void setNumOfYellowCard(int numOfYellowCard){
			this->numOfYellowCard = numOfYellowCard;
		}			
		int getNumOfYellowCard(){
			return this->numOfYellowCard;
		}			
		void setNumOfRedCard(int numOfRedCard){
			this->numOfRedCard = numOfRedCard;
		}			
		int getNumOfRedCard(){
			return this->numOfRedCard;
		}			
		void setTechniqueStat(int techniqueStat){
			this->techniqueStat = techniqueStat;
		}					
		int getTechniqueStat(){
			return this->techniqueStat;
		}			
		void setAssistNumInSeason(int assistNumInSeason){
			this->assistNumInSeason = assistNumInSeason;
		}			
		int getAssistNumInSeason(){
			return this->assistNumInSeason;
		}			
		void setGoalsNumInSeason(int goalsNumInSeason){
			this->goalsNumInSeason = goalsNumInSeason;
		}			
		int getGoalsNumInSeason(){
			return this->goalsNumInSeason;
		}								
		void setHeight(float height){
			this->height = height;
		}			
		float getHeight(){
			return this->height;
		}			
		void setWeight(float weight){
			this->weight = weight;
		}			
		float getWeight(){
			return this->weight;
		}						
	
																				
		Player() {
		} 
		Player(	string idMembers,string contractTerm,int idCardNumber,string fullName,int age,long long salary,int numberOfShirt,int Appearance,int numOfYellowCard,int numOfRedCard,int techniqueStat,int assistNumInSeason,int goalsNumInSeason,float height,float weight,string injury,string position) :Person(idMembers, contractTerm,idCardNumber, fullName, age, salary)
		{	
	     this->numberOfShirt=numberOfShirt ;
	     this->Appearance=Appearance ;
	     this->numOfYellowCard=numOfYellowCard ;
	     this->numOfRedCard=numOfRedCard ;
	     this->techniqueStat=techniqueStat;
	     this->assistNumInSeason=assistNumInSeason ;
	     this->goalsNumInSeason=goalsNumInSeason ;
	     this->height=height;
	     this->weight=weight ;
	     this->injury=injury ;
		}
		void input()
		{
			cout<<"INPUT THE PLAYER'S INFORMATION'"<<endl;
			Person::input();
			cout<<"Number of shirt(1-25): ";
			cin>>numberOfShirt;
			cout<<"Height: ";
			cin>>height;
			cout<<"Weight: ";
			cin>>weight;
			cout<<"Injury: ";
			cin.ignore();
			getline(cin,injury);
			cout<<"Appearance: ";
			cin>>Appearance;
			cout<<"Number of Yellow Card: ";
			cin>>numOfYellowCard;
			cout<<"Number of Red Card: ";
			cin>>numOfRedCard;
			cout<<"The number of assistance in Season: ";
			cin>>assistNumInSeason;
			cout<<"The number of goals in Season: ";
			cin>>goalsNumInSeason;	
			cout<<"Position: ";
			getline(cin,position);		
		}
		void output()
		{
			cout<<"--------------------------------------------------"<<endl;
			cout<<"         OUTPUT THE PLAYER'S INFORMATION'"<<endl;
			Person::output();
			cout<<"Number of shirt: "<<numberOfShirt<<endl;
			cout<<"Height: "<<height<<endl;
			cout<<"Weight: "<<weight<<endl;                
			cout<<"Injury: "<<injury<<endl;
			cout<<"Appearance: "<<Appearance<<endl;
			cout<<"Number of Yellow Card: "<<numOfYellowCard<<endl;
			cout<<"Number of Red Card: "<<numOfRedCard<<"  "<<endl;
			cout<<"The technique stat: "<<techniqueStat<<endl;
			cout<<"The number of assistance in Season: "<<assistNumInSeason<<endl;
			cout<<"The number of goals in Season: "<<goalsNumInSeason<<endl;		
		}
		void longOrShortTermRest()
		{
			// injury
			cout<<"--------------------------------------------------"<<endl;
			cout<<"THE TIME NEED FOR THE TERM REST BECAUSE OF INJURY"<<endl;
			if(this->injury == "ligament rupture" )   // dut day chang
				cout<<"2 months for the term rest(Long term rest)"<<endl;
			else if(this->injury == "sprain")  // bong gan
				cout<<"1 moth for the term rest(Short term rest)"<<endl;
			else if(this->injury == "tendinitis")  // viem gan
				cout<<"1.5 months for the term rest(Long term rest)"<<endl;
			else if(this->injury == "fracture")  // gay xuong
				cout<<"from 6 months to 1 year for the term rest(Long term rest)"<<endl;
			else if(this->injury == "muscle injury")  // chan thuong co
				cout<<"1 month for the term rest(Short term rest)"<<endl;
			else if(this->injury == "tear cartilage")  // rach sun
				cout<<"2 months for the term rest(Long term rest)"<<endl;
			else if(this->injury == "minor injury")  // chan thuong nhe
				cout<<"from 1 to 2 weeks for the term rest(Short term rest)"<<endl;
			else 
				cout<<"NO TERM REST"<<endl;			
			}
		float numOfExpectedGoal()
		{
			// goalsNumInSeason & Appearance
			float Num_Of_Expected_Goals;
			cout<<"--------------------------------------------------"<<endl;
			cout<<"==========The Number Of Expected Goals=========="<<endl;
			Num_Of_Expected_Goals = this->goalsNumInSeason / this->Appearance;
			return Num_Of_Expected_Goals;	
		}	
		float numOfExpectedAssist()
		{
			// assistNumInSeason & Appearance
			float Num_Of_Expected_Assists;
			cout<<"--------------------------------------------------"<<endl;
			cout<<"==========The Number Of Expected Assists=========="<<endl;
			Num_Of_Expected_Assists = this->assistNumInSeason / this->Appearance;
			return Num_Of_Expected_Assists;
		}		
};

class Forward:public Player
{
	private:
		string escapeOffside; // Kha nang thoat bay viet vi
		string penaltyAble; // Kha nang sut pennalty
		string combiWithOther; // Kha nang phoi hop voi cau thu khac
		int numOfGodenGoals; // So luong ban thang vang
	public:
		void setEscapeOffside(string escapeOffside){
			this->escapeOffside = escapeOffside;
		}			
		string getEscapeOffside( ){
			return this->escapeOffside;
		}			
		void setPenaltyAble(string penaltyAble){
			this->penaltyAble = penaltyAble;
		}			
		string getPenaltyAble( ){
			return this->penaltyAble;
		}			
		void setCombiWithOther(string combiWithOther){
			this->combiWithOther = combiWithOther;
		}			
		string getCombiWithOther( ){
			return this->combiWithOther;
		}			
		void setNumOfGodenGoals(int numOfGodenGoals){
			this->numOfGodenGoals = numOfGodenGoals;
		}			
		int getNumOfGodenGoals( ){
			return this->numOfGodenGoals;
		}					
		Forward()
		{
		
		} 
		Forward(string idMembers,string contractTerm,int idCardNumber,string fullName,int age,long long salary,int numberOfShirt,int Appearance,int numOfYellowCard,int numOfRedCard,int techniqueStat,int assistNumInSeason,int goalsNumInSeason,float height,float weight,string injury,string position,string escapeOffside,	string penaltyAble,	string combiWithOther,	int numOfGodenGoals):Player(idMembers,contractTerm,idCardNumber,fullName,age,salary,numberOfShirt,Appearance,numOfYellowCard,numOfRedCard,techniqueStat,assistNumInSeason,goalsNumInSeason,height,weight,injury,position) {
		this->escapeOffside=escapeOffside ;
		this->penaltyAble=penaltyAble ;
		this->combiWithOther=combiWithOther ;
		this->numOfGodenGoals=numOfGodenGoals;
		}
		void input()
		{
			cout<<"--------------------------------------------------"<<endl;
			cout<<"INPUT THE FORWARD'S INFORMATION"<<endl;
			Player::input();
			cout<<"The ability of escaping offside: ";
			getline(cin,escapeOffside);
			cout<<"The number of the Goden Goals: ";
			cin>>numOfGodenGoals;
			cout<<"PenaltyAble: ";
			cin.ignore();
			getline(cin,penaltyAble);
			cout<<"The combination with Orther: ";
			getline(cin,combiWithOther);
		}
		void output()
		{
			cout<<"--------------------------------------------------"<<endl;
			cout<<"OUTPUT THE FORWARD'S INFORMATION"<<endl;
			Player::output();
			cout<<"The ability of escaping offside: "<<escapeOffside<<endl;
			cout<<"The number of the Goden Goals: "<<numOfGodenGoals<<endl;
			cout<<"PenaltyAble: "<<penaltyAble<<endl;
			cout<<"The combination with Orther: "<<combiWithOther<<endl;
		}
		string mission()
		{
			// combiWithOther
			cout<<"--------------------------------------------------"<<endl;
			cout<<"==========The Forward's Mission=========="<<endl;	
			cout<<"The main mission is score."<<endl;
			cout<<"If Forward is a versatile player, he/she can back to support the defense when the defender needs."<<endl;
			if(this->combiWithOther == "good" || this->combiWithOther == "best")
				cout<<"Sometimes the Forward can assist for Midfielder to score."<<endl;
		}
		long long calculateWage()
		{
			// escapeOffside & penaltyAble & combiWithOther & numOfGodenGoals
			cout<<"--------------------------------------------------"<<endl;
			cout<<"==========The Forward's Wage=========="<<endl;
			long Wage,Salary,Bonus;
			if((this->escapeOffside == "good" || this->escapeOffside == "best") && (this->penaltyAble == "good" || this->penaltyAble == "best")&& (this->combiWithOther == "good" || this->combiWithOther == "best")&& this->numOfGodenGoals > 5)
				Salary = 4500000;
			else if((this->escapeOffside == "good" || this->escapeOffside == "normal") && (this->penaltyAble == "good" || this->penaltyAble == "normal")&& (this->combiWithOther == "good" || this->combiWithOther == "normal")&& this->numOfGodenGoals > 3)	
				Salary = 3000000;
			else if((this->escapeOffside == "bad" || this->escapeOffside == "normal") && (this->penaltyAble == "bad" || this->penaltyAble == "normal")&& (this->combiWithOther == "bad" || this->combiWithOther == "normal")&& this->numOfGodenGoals < 3)	
				Salary = 1000000;
			else if(this->escapeOffside == "bad" && this->penaltyAble == "bad" && this->combiWithOther == "bad" && this->numOfGodenGoals <= 1)	
				Salary = 300000;
			// 	getGoalsNumInSeason & getAssistNumInSeason 
			if(this->getGoalsNumInSeason() > 10  && this->getAssistNumInSeason()  > 8 )
				Bonus = 1000000;
			else if(this->getGoalsNumInSeason() > 8  && this->getAssistNumInSeason()  > 6 )	
				Bonus = 500000;
			else if(this->getGoalsNumInSeason() > 6  && this->getAssistNumInSeason()  > 4 )	
				Bonus = 100000;
			else if(this->getGoalsNumInSeason() > 4  && this->getAssistNumInSeason()  > 2 )	
				Bonus = 50000;	
			else if(this->getGoalsNumInSeason() == 0  && this->getAssistNumInSeason()  == 0)	
				Bonus = 0;
							
			Wage = Salary + Bonus;
			return Wage;		
		}

		bool signingCondition()
		{
			// getGoalsNumInCareer & getAssistNumInCareer
			if(this->getGoalsNumInSeason() == 0  && this->getAssistNumInSeason()  == 0 )
				return false;
			else
				return true;
		}
		
		void ConditionSigning()
		{
			// signingCondition
			if(this->signingCondition() == true)
				cout<<"On the team list!"<<endl;
			else
				cout<<"Unsatisfactory!"<<endl;	
		}

		void riskOfTerminateContract()
		{
			// getGoalsNumInSeason & getAssistNumInSeason		
			cout<<"--------------------------------------------------"<<endl;
			cout<<"==========Risk Of Contract Termination Of Forward=========="<<endl;			
			if(this->getGoalsNumInSeason() == 0  && this->getAssistNumInSeason()  == 0 )
				cout<<"The risk of contract termination is absolutely happen!"<<endl;
			else if(this->getGoalsNumInSeason() > 4  && this->getAssistNumInSeason()  > 2 )
				cout<<"The risk of contract termination is maybe happen!"<<endl;
			else if(this->getGoalsNumInSeason() > 6  && this->getAssistNumInSeason()  > 4 )
				cout<<"There have no for risking of contract termination!"<<endl;
		}
		void oppRenewContract()
		{
			// getGoalsNumInSeason & getAssistNumInSeason		
			cout<<"--------------------------------------------------"<<endl;
			cout<<"==========Ability To Opperate Renewable Contract Of Forward=========="<<endl;		
			if(this->getGoalsNumInSeason() > 6  && this->getAssistNumInSeason()  > 4 )
				cout<<"The opperated renewable contract is absolutely happen!"<<endl;
			else if(this->getGoalsNumInSeason() > 4  && this->getAssistNumInSeason()  > 2 )
				cout<<"The opperated renewable contract is uncertain!"<<endl;
			else if(this->getGoalsNumInSeason() == 0  && this->getAssistNumInSeason()  == 0)
				cout<<"There have no for opperating renewable contract!"<<endl;
		}
};
 class listForward:public Forward
 {
 	public:
 		string password;
 		vector<Forward> v;
 		void inputlist()
 		{
 			int n;
 			cout<<"Input number of Forwards: ";
 			cin>>n;
 			for(int i=0;i<n;i++)
 			{
 				Forward f;
 				f.input();
 				v.push_back(f);
			 }
 			ofstream fo;
 			fo.open("E:\\test.txt");
 			if(fo.is_open())
 			{
				for(int i =0;i<v.size();i++)
				{
					fo<<i+1<<endl;
					fo<<"Name: "<<v[i].getFullName()<<endl;
					fo<<"Age: "<<v[i].getAge()<<endl;
					fo<<"Height: "<<v[i].getHeight()<<endl;
					fo<<"Weight: "<<v[i].getWeight()<<endl;
					fo<<"Position: "<<v[i].getPosition()<<endl;
				}
				fo.close();
			}else{
				cout<<"Error!!!"<<endl;
			}
		}
		void checkForward()
		{
		
			string checkName;
			cout<<"Input the player who you want to find information: ";
			cin.ignore();
			getline(cin,checkName);
			int n;
 			cout<<"Nhap n: ";
 			cin>>n;
			int find = 0;
			for(int i=0;i<v.size();i++)
				{
					if(checkName == v[i].getFullName())
					{
						cout<<"Name: "<<v[i].getFullName()<<endl;
						cout<<"Age: "<<v[i].getAge()<<endl;
						cout<<"Height: "<<v[i].getHeight()<<endl;
						cout<<"Weight: "<<v[i].getWeight()<<endl;
						cout<<"Position: "<<v[i].getPosition()<<endl;
						find = i;	
					}
				}
			ofstream fo;
			fo.open("E:\\new.txt");
			if(fo.is_open())
			{
				fo<<"Output the player's information you want to find: "<<endl;
				fo<<"Name: "<<v[find].getFullName()<<endl;
				fo<<"Age: "<<v[find].getAge()<<endl;
				fo<<"Height: "<<v[find].getHeight()<<endl;
				fo<<"Weight: "<<v[find].getWeight()<<endl;
				fo<<"Position: "<<v[find].getPosition()<<endl;
			fo.close();
			}else
			{
				cout<<"The player who you want to find are not in team!"<<endl;
			}
		}
/*	void chooseTeam()
	{
		string nameOfCoach;
		cout<<"Input the name of Coach: ";
		cin.ignore();
		getline(cin,nameOfCoach);
		do{
			cout<<"Password: ";
			getline(cin,this->password);
		}while(this->password != "nhomsieucapvippro");
		cout<<"Choose your choice in tactics"<<endl;
		cout<<"1. 1 - 4 - 3 - 3 "<<endl;
		cout<<"2. 1 - 3 - 4 - 3 "<<endl;
		int luachon;
		cout<<"Your choice: ";
		cin>>luachon;
		switch(luachon)
		{
			case 1:
				
		}
	}*/

 };
int main()
{
	Forward f1("ST001","30/04/1985",10001,"Cristiano Ronaldo",37,1000000,7,93,1,2,97,25,75,187,80,"no","ST","good","good","best",25);
	Forward f2("RW001","24/06/1987",10002,"Lionel Messi ",35,1000000,10,95,2,1,99,45,85,168,64,"no","RW","best","good","best",25);
	Forward f3("LW001","05/02/1992",10003,"Neymar Jr",30,900000,11,95,3,2,95,30,50,180,70,"normal injury","LW","normal","good","good",20);
	Forward f4("ST002","03/10/1981",10004,"Zlatan Ibrahimovic",40,800000,8,93,3,3,90,20,70,192,85,"no","ST","normal","good","normal",18);
	Forward f5("ST003","21/08/1988",10005,"Robert Lewandowski",33,850000,9,90,1,0,89,23,75,184,80,"normal injury","ST","best","good","good",23);
	f1.output();
	f2.output();
	f3.output();
	f4.output();
	f5.output();
//	listForward l;
//	l.chooseTeam();
	return 0;
}


