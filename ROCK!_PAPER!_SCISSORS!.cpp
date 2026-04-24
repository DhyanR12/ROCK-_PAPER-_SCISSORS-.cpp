#include<iostream>
#include<random>
#include<string>
using namespace std;

int main()
{
	    int SystemNum;
	  string Player;
	 string systemChoice;
  random_device rd;
    mt19937 gen(rd());	
     uniform_int_distribution<int> choice(1,3);
	  cout << "Welcome to Rock, Paper, Scissors!" << endl;
	   cout<<"................................................."<<endl;
	   cout << "Please enter your choice in CAP letters(ROCK! PAPER! SCISSORS!): "<<endl;
	 cin>>Player;
    cout << "It's my turn now..." << endl;
	SystemNum = choice(gen);
 if (SystemNum == 1) { systemChoice = "ROCK"; }
   else if (SystemNum == 2) { systemChoice = "PAPER"; }
	 else if (SystemNum == 3) { systemChoice = "SCISSORS"; }
	 cout << "LOADING..." << endl;
	   cout << "I have made my choice!" << endl;
    cout << "................................................."<<endl;
 cout<<"My choice is :  "<<systemChoice<<endl;
	 if (Player == systemChoice) {
	   cout<<"Oops! It's a tie!Try again"<<endl;}
		  else if((Player== "ROCK"&& systemChoice=="SCISSORS")||
         (Player== "PAPER"&& systemChoice=="ROCK")||
	   (Player== "SCISSORS"&& systemChoice=="PAPER"))
	 {cout<<"Congratulations! You win!"<<endl;}
   else {cout << "Oops! You lose...Try again!" << endl;}
      cout << "................................................." << endl;
        cout << "Thanks for playing! See you next time!" << endl;
			
				
	  


	  return 0;
}
