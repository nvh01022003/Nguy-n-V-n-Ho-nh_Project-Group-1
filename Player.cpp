#include "Person.cpp"
class Player:public Person
{
	private:
		int numberOfShirt, Appearance, numOfYellowCard, numOfRedCard, techniqueStat, assistNumInSeason, goalsNumInSeason, assistNumInCareer, goalsNumInCareer;
		float height, weight, speed, scoreAverage;
		string injury, dutyInTeam, escapePressing, passingBall, shootBall, header, specialGoals;
	public:
		void setInjury(string injury)
			this->injury = injury;
		string getInjury(string injury)
			return this->injury;
		void setDutyInTeam(string dutyInTeam)
			this->dutyInTeam = dutyInTeam;
		string getDutyInTeam(string dutyInTeam)
			return this->dutyInTeam;
		void setEscapePressing(string escapePressing)
			this->escapePressing = escapePressing;
		string getEscapePressing(string escapePressing)
 			return this->escapePressing;
		void setPassingBall(string passingBall)
			this->passingBall = passingBall;
		string getPassingBall(string passingBall)
			return this->passingBall;
		void setShootBall(string shootBall)
			this->shootBall = shootBall;
		string getShootBall(string shootBall)
			return this->shootBall;
		void setHeader(string header)
			this->header = header;
		string getHeader(string header)
			return this->header;
		void setSpecialGoals(string specialGoals)
			this->specialGoals = specialGoals;
		string getSpecialGoals(string specialGoals)
			return this->specialGoals;	


		void setNumberOfShirt(int numberOfShirt)
			this->numberOfShirt = numberOfShirt;
		int getNumberOfShirt(int numberOfShirt)
			return this->numberOfShirt;
		void setAppearance(int Appearance)
			this->Appearance = Appearance;
		int getAppearance(int Appearance)
			return this->Appearance;
		void setNumOfYellowCard(int numOfYellowCard)
			this->numOfYellowCard = numOfYellowCard;
		int getNumOfYellowCard(int numOfYellowCard)
			return this->numOfYellowCard;
		void setNumOfRedCard(int numOfRedCard)
			this->numOfRedCard = numOfRedCard;
		int getNumOfRedCard(int numOfRedCard)
			return this->numOfRedCard;
		void setTechniqueStat(int techniqueStat)
			this->techniqueStat = techniqueStat;
		int getTechniqueStat(int techniqueStat)
			return this->techniqueStat;
		void setAssistNumInSeason(int assistNumInSeason)
			this->assistNumInSeason = assistNumInSeason;
		int getAssistNumInSeason(int assistNumInSeason)
			return this->assistNumInSeason;
		void setGoalsNumInSeason(int goalsNumInSeason)
			this->goalsNumInSeason = goalsNumInSeason;
		int getGoalsNumInSeason(int goalsNumInSeason)
			return this->goalsNumInSeason;
		void setAssistNumInCareer(int assistNumInCareer)
			this->assistNumInCareer = assistNumInCareer;
		int getAssistNumInCareer(int assistNumInCareer)
			return this->assistNumInCareer;
		void setGoalsNumInCareer(int goalsNumInCareer)
			this->goalsNumInCareer = goalsNumInCareer;
		int getGoalsNumInCareer(int goalsNumInCareer)
			return this->goalsNumInCareer;
		
		
		void setHeight(float height)
			this->height = height;
		float getHeight(float height)
			return this->height;
		void setWeight(float weight)
			this->weight = weight;
		float getWeight(float weight)
			return this->weight;
		void setSpeed(float speed)
			this->speed = speed;
		float getSpeed(float speed)
			return this->speed;
		void setScoreAverage(float scoreAverage)
			this->scoreAverage = scoreAverage;
		float getScoreAverage(float scoreAverage)
			return this->scoreAverage;				
		
																				
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
			cout<<"The special goals: "<<specialGoals<<endl;		
		}
		void longOrShortTermRest()
		{
			cout<<"--------------------------------------------------"<<endl;
			cout<<"THE TIME NEED FOR THE TERM REST BECAUSE OF INJURY"<<endl;
			if(this->injury == "ligament rupture" )
				cout<<"2 months for the term rest(Long term rest)"<<endl;
			else if(this->injury == "cotton fabric")
				cout<<"1 moth for the term rest(Short term rest)"<<endl;
			else if(this->injury == "tendinitis")
				cout<<"1.5 months for the term rest(Long term rest)"<<endl;
			else if(this->injury == "fracture")
				cout<<"from 6 months to 1 year for the term rest(Long term rest)"<<endl;
			else if(this->injury == "muscle injury")
				cout<<"1 month for the term rest(Short term rest)"<<endl;
			else if(this->injury == "tear cartilage")
				cout<<"2 months for the term rest(Long term rest)"<<endl;
			else if(this->injury == "minor injury")
				cout<<"from 1 to 2 weeks for the term rest(Short term rest)"<<endl;
			else 
				cout<<"NO TERM REST"<<endl;			
			}
		float numOfExpectedGoal()
		{
			float Num_Of_Expected_Goals;
			cout<<"--------------------------------------------------"<<endl;
			cout<<"==========The Number Of Expected Goals=========="<<endl;
			Num_Of_Expected_Goals = this->goalsNumInSeason / this->Appearance;
			return Num_Of_Expected_Goals;	
		}	
		float numOfExpectedAssist()
		{
			float Num_Of_Expected_Assists;
			cout<<"--------------------------------------------------"<<endl;
			cout<<"==========The Number Of Expected Assists=========="<<endl;
			Num_Of_Expected_Assists = this->assistNumInSeason / this->Appearance;
			return Num_Of_Expected_Assists;
		}		
};
