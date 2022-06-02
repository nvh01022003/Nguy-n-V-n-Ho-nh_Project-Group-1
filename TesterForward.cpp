#include<iostream>
#include<algorithm>
#include<vector>
#include<fstream> 
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
//	virtual string mission() = 0;
//	virtual long long calculateWage() = 0;
//	virtual bool signingCondition() = 0;
//	virtual void riskOfTerminateContract() = 0;
//	virtual void oppRenewContract() = 0;
};
class Person:public FootballClub {
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
		cout<<"Full name :" ;
		getline(cin,this->fullName) ;
		cout<<"Age :" ;
		cin>>this->age ;
		cout<<"Salary :" ;
		cin>>this->salary ;
		
		} 
		void output() {
		FootballClub::output() ; 
		cout<<"CardNumber :"<<this->idCardNumber<<"\n";
		cout<<"Full Name :" <<this->fullName <<"\n" ;
		cout<<"Age :" <<this->age<<"\n" ;
		cout<<"Salary :"<<this->salary<<"\n" ;
		
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
		int assistNumInCareer; // So luong kien tao trong su nghiep cau thu
		int goalsNumInCareer; // So luong ban thang trong su nghiep cau thu
		float height; // Chieu cao
		float weight; // Can nang
		float speed; // Toc do
		float scoreAverage; // Trung binh so ban thang
		string injury; // Loai chan thuong
		string dutyInTeam; // Vai tro trong doi bong
		string escapePressing; // Kha nang thoat Pressing
		string  passingBall; // Kha nang chuyen bong
		string shootBall; // Kha nang sut bong
		string header; // Kha nang lanh dao
		string specialGoals; // Ban thang dac biet
		string position; // vi tri
	public:
		void setInjury(string injury){
			this->injury = injury;
		}
		string getInjury(){
			return this->injury;
		}			
		void setDutyInTeam(string dutyInTeam){
			this->dutyInTeam = dutyInTeam;
		}
		string getDutyInTeam(){
			return this->dutyInTeam;
		}			
		void setEscapePressing(string escapePressing){
			this->escapePressing = escapePressing;
		}
		string getEscapePressing(){
			return this->escapePressing;
		}			
		void setPassingBall(string passingBall){
			this->passingBall = passingBall;
		}			
		string getPassingBall(){
			return this->passingBall;
		}			
		void setShootBall(string shootBall){
			this->shootBall = shootBall;
		}		
		string getShootBall(){
			return this->shootBall;
		}		
		void setHeader(string header){
			this->header = header;
		}			
		string getHeader(){
			return this->header;
		}			
		void setSpecialGoals(string specialGoals){
			this->specialGoals = specialGoals;
		}			
		string getSpecialGoals(){
			return this->specialGoals;	
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
		void setAssistNumInCareer(int assistNumInCareer){
			this->assistNumInCareer = assistNumInCareer;
		}			
		int getAssistNumInCareer(){
			return this->assistNumInCareer;
		}			
		void setGoalsNumInCareer(int goalsNumInCareer){
			this->goalsNumInCareer = goalsNumInCareer;
		}			
		int getGoalsNumInCareer(){
			return this->goalsNumInCareer;
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
		void setSpeed(float speed){
			this->speed = speed;
		}			
		float getSpeed(){
			return this->speed;
		}			
		void setScoreAverage(float scoreAverage){
			this->scoreAverage = scoreAverage;
		}			
		float getScoreAverage(){
			return this->scoreAverage;		
		}
																				
		Player()
		{
			numberOfShirt = 0;
			height = 0;
			weight = 0;	
			speed = 0;
			scoreAverage = 0;
			injury = " ";
			Appearance = 0;
			numOfYellowCard = 0;
			numOfRedCard = 0;
			dutyInTeam = " ";
			techniqueStat = 0;
			escapePressing = " ";
			passingBall = " ";
			shootBall = " ";
			header = " ";
			assistNumInSeason = 0;
			goalsNumInSeason = 0;
			assistNumInCareer = 0;
			goalsNumInCareer = 0;
			specialGoals = " ";
		}
		void input()
		{
			cout<<"INPUT THE PLAYER'S INFORMATION'"<<endl;
			Person::input();
			cout<<"Number of shirt: ";
			cin>>numberOfShirt;
			cout<<"Height: ";
			cin>>height;
			cout<<"Weight: ";
			cin>>weight;
			cout<<"Speed: ";
			cin>>speed;
			cout<<"The average of score: ";
			cin>>scoreAverage;
			cout<<"Injury: ";
			cin.ignore();
			getline(cin,injury);
			cout<<"Appearance: ";
			cin>>Appearance;
			cout<<"Number of Yellow Card: ";
			cin>>numOfYellowCard;
			cout<<"Number of Red Card: ";
			cin>>numOfRedCard;
			cout<<"The duty in Team: ";
			cin.ignore();
			getline(cin,dutyInTeam);
			cout<<"The technique stat: ";
			cin>>techniqueStat;
			cout<<"The escapation of Pressing: ";
			cin.ignore();
			getline(cin,escapePressing);
			cout<<"The passing Ball: ";
			getline(cin,passingBall);
			cout<<"The ability of shooting Ball: ";
			getline(cin,shootBall);
			cout<<"The header: ";
			getline(cin,header);
			cout<<"The number of assistance in Season: ";
			cin>>assistNumInSeason;
			cout<<"The number of goals in Season: ";
			cin>>goalsNumInSeason;
			cout<<"The number of assistance in Career: ";
			cin>>assistNumInCareer;
			cout<<"The number of goals in Career: ";
			cin>>goalsNumInCareer;
			cout<<"The special goals: ";
			cin.ignore();
			getline(cin,specialGoals);	
			cout<<"Position: ";
			getline(cin,position);		
		}
		void output()
		{
			cout<<"--------------------------------------------------"<<endl;
			cout<<"                         OUTPUT THE PLAYER'S INFORMATION'"<<endl;
			Person::output();
			cout<<"Number of shirt: "<<numberOfShirt<<"  "<<"Height: "<<height<<"  "<<"Weight: "<<weight<<"  "<<"Speed: "<<speed<<endl;                
			cout<<"The average of score: "<<scoreAverage<<"  "<<"Injury: "<<injury<<"  "<<"Appearance: "<<Appearance<<endl;
			cout<<"Number of Yellow Card: "<<numOfYellowCard<<"  "<<"Number of Red Card: "<<numOfRedCard<<"  "<<"The duty in Team: "<<dutyInTeam<<endl;
			cout<<"The technique stat: "<<techniqueStat<<"  "<<"The escapation of Pressing: "<<escapePressing<<"  "<<"The passing Ball: "<<passingBall<<endl;
			cout<<"The ability of shooting Ball: "<<shootBall<<"  "<<"The header: "<<header<<"  "<<endl;
			cout<<"The number of assistance in Season: "<<assistNumInSeason<<"  "<<"The number of goals in Season: "<<goalsNumInSeason<<endl;
			cout<<"The number of assistance in Career: "<<assistNumInCareer<<"  "<<"The number of goals in Career: "<<goalsNumInCareer<<endl;
			cout<<"The special goals: "<<specialGoals<<" "<<"Position: "<<position<<endl;		
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
			escapeOffside = " ";
			numOfGodenGoals = 0;
			penaltyAble = " ";
			combiWithOther = " ";
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
		double calculateWage()
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
			// 	getGoalsNumInSeason & getAssistNumInSeason & getScoreAverage & numOfGodenGoals
			if(this->getGoalsNumInSeason() > 10  && this->getAssistNumInSeason()  > 8 && this->getScoreAverage() > 7 && this->numOfGodenGoals > 5)
				Bonus = 1000000;
			else if(this->getGoalsNumInSeason() > 8  && this->getAssistNumInSeason()  > 6 && this->getScoreAverage() > 5 && this->numOfGodenGoals > 3)	
				Bonus = 500000;
			else if(this->getGoalsNumInSeason() > 6  && this->getAssistNumInSeason()  > 4 && this->getScoreAverage() > 3 && this->numOfGodenGoals > 2)	
				Bonus = 100000;
			else if(this->getGoalsNumInSeason() > 4  && this->getAssistNumInSeason()  > 2 && this->getScoreAverage() > 2 && this->numOfGodenGoals > 2)	
				Bonus = 50000;	
			else if(this->getGoalsNumInSeason() == 0  && this->getAssistNumInSeason()  == 0 && this->getScoreAverage() == 0 && this->numOfGodenGoals < 2)	
				Bonus = 0;
							
			Wage = Salary + Bonus;
			return Wage;		
		}

		bool signingCondition()
		{
			// getGoalsNumInCareer & getAssistNumInCareer & getScoreAverage & numOfGodenGoals
			if(this->getGoalsNumInCareer() == 0  && this->getAssistNumInCareer()  == 0 && this->getScoreAverage() == 0 && this->numOfGodenGoals < 2)
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
			// getGoalsNumInSeason & getAssistNumInSeason & getScoreAverage & numOfGodenGoals		
			cout<<"--------------------------------------------------"<<endl;
			cout<<"==========Risk Of Contract Termination Of Forward=========="<<endl;			
			if(this->getGoalsNumInSeason() == 0  && this->getAssistNumInSeason()  == 0 && this->getScoreAverage() == 0 && this->numOfGodenGoals < 2)
				cout<<"The risk of contract termination is absolutely happen!"<<endl;
			else if(this->getGoalsNumInSeason() > 4  && this->getAssistNumInSeason()  > 2 && this->getScoreAverage() > 2 && this->numOfGodenGoals > 2)
				cout<<"The risk of contract termination is maybe happen!"<<endl;
			else if(this->getGoalsNumInSeason() > 6  && this->getAssistNumInSeason()  > 4 && this->getScoreAverage() > 3 && this->numOfGodenGoals > 2)
				cout<<"There have no for risking of contract termination!"<<endl;
		}
		void oppRenewContract()
		{
			// getGoalsNumInSeason & getAssistNumInSeason & getScoreAverage & numOfGodenGoals		
			cout<<"--------------------------------------------------"<<endl;
			cout<<"==========Ability To Opperate Renewable Contract Of Forward=========="<<endl;		
			if(this->getGoalsNumInSeason() > 6  && this->getAssistNumInSeason()  > 4 && this->getScoreAverage() > 3 && this->numOfGodenGoals > 2)
				cout<<"The opperated renewable contract is absolutely happen!"<<endl;
			else if(this->getGoalsNumInSeason() > 4  && this->getAssistNumInSeason()  > 2 && this->getScoreAverage() > 2 && this->numOfGodenGoals > 2)
				cout<<"The opperated renewable contract is uncertain!"<<endl;
			else if(this->getGoalsNumInSeason() == 0  && this->getAssistNumInSeason()  == 0 && this->getScoreAverage() == 0 && this->numOfGodenGoals < 2)
				cout<<"There have no for opperating renewable contract!"<<endl;
		}
		void valueBringingLastSeason()
		{
			// getEscapePressing & getPassingBall & getShootBall & getHeader & getSpecialGoals		
			cout<<"--------------------------------------------------"<<endl;
			cout<<"==========Value Bringing Last Season Of Forward=========="<<endl;
			if(this->getEscapePressing() == "best" && this->getPassingBall() == "best" && this->getShootBall() == "best" && this->getHeader() == "best" && this->getSpecialGoals() == "best")
				cout<<"The value bringing last season is the CHAMPIONSHIP of the Season belong to the Team!"<<endl;
				cout<<"The BEST player in this season!"<<endl;
				cout<<"Being on the list to receive THE GODEN BALL!"<<endl;
			if((this->getEscapePressing() != "good" || this->getEscapePressing() != "best") && (this->getPassingBall() != "good" || this->getPassingBall() != "best")&& (this->getShootBall() != "good" || this->getShootBall() != "best")&& (this->getHeader() != "good" || this->getHeader() != "best") && (this->getSpecialGoals() != "good" || this->getSpecialGoals() != "best"))
				cout<<"There have no value for bringing to the Team in last season!"<<endl;
		}		
};
 class listForward:public Forward
 {
 	public:
 		vector<Forward> v;
 		void inputlist()
 		{
 			int n;
 			cout<<"Nhap n: ";
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
 };
int main() {
	listForward l;
	l.inputlist();
	return 0;
}
