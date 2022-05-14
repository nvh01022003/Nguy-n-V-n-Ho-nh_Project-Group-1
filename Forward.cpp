#include "Player.cpp"
class Forward:public Player
{
	private:
		string escapeOffside, penaltyAble, combiWithOther;
		int numOfGodenGoals;
	public:
		void setEscapeOffside(string escapeOffside)
			this->escapeOffside = escapeOffside;
		string getEscapeOffside(string escapeOffside)
			return this->escapeOffside;
		void setPenaltyAble(string penaltyAble)
			this->penaltyAble = penaltyAble;
		string getPenaltyAble(string penaltyAble)
			return this->penaltyAble;
		void setCombiWithOther(string combiWithOther)
			this->combiWithOther = combiWithOther;
		string getCombiWithOther(string combiWithOther)
			return this->combiWithOther;
		void setNumOfGodenGoals(string numOfGodenGoals)
			this->numOfGodenGoals = numOfGodenGoals;
		int getNumOfGodenGoals(int numOfGodenGoals)
			return this->numOfGodenGoals;		
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
			cout<<"--------------------------------------------------"<<endl;
			cout<<"==========The Forward's Mission=========="<<endl;	
			cout<<"The main mission is score."<<endl;
			cout<<"If Forward is a versatile player, he/she can back to support the defense when the defender needs."<<endl;
			if(this->combiWithOther == "good" || this->combiWithOther == "best")
				cout<<"Sometimes the Forward can assist for Midfielder to score."<<endl;
		}
		long calculateWage()
		{
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
			if((this->escapeOffside == "good" || this->escapeOffside == "best") && (this->penaltyAble == "good" || this->penaltyAble == "best")&& (this->combiWithOther == "good" || this->combiWithOther == "best")&& this->numOfGodenGoals > 5)
				Bonus = 1000000;
			else if((this->escapeOffside == "good" || this->escapeOffside == "normal") && (this->penaltyAble == "good" || this->penaltyAble == "normal")&& (this->combiWithOther == "good" || this->combiWithOther == "normal")&& this->numOfGodenGoals > 3)	
				Bonus = 500000;
			else if((this->escapeOffside == "bad" || this->escapeOffside == "normal") && (this->penaltyAble == "bad" || this->penaltyAble == "normal")&& (this->combiWithOther == "bad" || this->combiWithOther == "normal")&& this->numOfGodenGoals < 3)	
				Bonus = 100000;
			else if(this->escapeOffside == "bad" && this->penaltyAble == "bad" && this->combiWithOther == "bad" && this->numOfGodenGoals <= 1)	
				Bonus = 0;
			Wage = Salary + Bonus;
			return Wage;		
		}
		bool signingCondition()
		{
			if(this->escapeOffside == "bad" && this->penaltyAble == "bad" && this->combiWithOther == "bad" && this->numOfGodenGoals <3)
				{
					return false;
					cout<<"Unsatisfactory!"<<endl;
				}
			else
				{ 
					return true;
					cout<<"On the team list!"<<endl;
				}
		}
		void riskOfTerminateContract()
		{
			cout<<"--------------------------------------------------"<<endl;
			cout<<"==========Risk Of Contract Termination Of Forward=========="<<endl;
			if(this->escapeOffside == "bad" && this->penaltyAble == "bad" && this->combiWithOther == "bad" && this->numOfGodenGoals <3)
				cout<<"The risk of contract termination is absolutely happen!"<<endl;
			else if(this->escapeOffside == "normal" || this->penaltyAble == "normal" || this->combiWithOther == "normal" && this->numOfGodenGoals == 3)
				cout<<"The risk of contract termination is maybe happen!"<<endl;
			else if((this->escapeOffside == "good" || this->escapeOffside == "best") && (this->penaltyAble == "good" || this->penaltyAble == "best")&& (this->combiWithOther == "good" || this->combiWithOther == "best")&& this->numOfGodenGoals > 5)
				cout<<"There have no for risking of contract termination!"<<endl;
		}
		void oppRenewContract()
		{
			cout<<"--------------------------------------------------"<<endl;
			cout<<"==========Ability To Opperate Renewable Contract Of Forward=========="<<endl;
			if((this->escapeOffside == "good" || this->escapeOffside == "best") && (this->penaltyAble == "good" || this->penaltyAble == "best")&& (this->combiWithOther == "good" || this->combiWithOther == "best")&& this->numOfGodenGoals > 5)
				cout<<"The opperated renewable contract is absolutely happen!"<<endl;
			else if(this->escapeOffside == "normal" || this->penaltyAble == "normal" || this->combiWithOther == "normal" && this->numOfGodenGoals < 5)
				cout<<"The opperated renewable contract is uncertain!"<<endl;
			else if(this->escapeOffside == "bad" && this->penaltyAble == "bad" && this->combiWithOther == "bad" && this->numOfGodenGoals <3)
				cout<<"There have no for opperating renewable contract!"<<endl;
		}
		void valueBringingLastSeason()
		{
			cout<<"--------------------------------------------------"<<endl;
			cout<<"==========Value Bringing Last Season Of Forward=========="<<endl;
			if(this->escapeOffside == "best" && this->penaltyAble == "best" && this->combiWithOther == "best" && this->numOfGodenGoals >= 10)
				cout<<"The value bringing last season is the CHAMPIONSHIP of the Season belong to the Team!"<<endl;
				cout<<"The BEST player in this season!"<<endl;
				cout<<"Being on the list to receive THE GODEN BALL!"<<endl;
			if((this->escapeOffside != "good" || this->escapeOffside != "best") && (this->penaltyAble != "good" || this->penaltyAble != "best")&& (this->combiWithOther != "good" || this->combiWithOther != "best")&& this->numOfGodenGoals < 10)
				cout<<"There have no value for bringing to the Team in last season!"<<endl;
		}		
};
