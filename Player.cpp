#include "Person.cpp"
class Player:private Person
{
	private:
		int numberOfShirt, Appearance, numOfYellowCard, numOfRedCard, techniqueStat, assistNumInSeason, goalsNumInSeason, assistNumInCareer, goalsNumInCareer;
		float height, weight, speed, scoreAverage;
		string injury, dutyInTeam, escapePressing, passingBall, shootBall, header, specialGoals;
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
	void set_Name()
	{
		Person P = new Person();
		this->P.fullName = P.fullName;
	}
	string get_Name()
	{
		return this->P.fullName;
	}
	void input()
	{
		cout<<"INPUT THE PLAYER'S INFORMATION'"<<endl;
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
