#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
	int tries,tot_hearts;//Total times a user will mine the heart or a spade based on the level and total hearts
	char level;//Level of the game
	char choice;int found_hearts=0; 
	int game_no=0; //To calculate the current game no if game is played more than once
	int total_score;//Total score
	//Declaring array for the intial game grid
	char game_grid[4][6],letter='A';string dificulty;
	char card_symbols[4][6];
	char spad_sym='\6';//Spade
	char heart_sym='\3';//Hearts

	do
	{
		game_no++;
		//Storing letters in the game grid array
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<6;j++)
			{
				game_grid[i][j]=letter;
				++letter;
			}
		}
		//Chosing the level
		//Asking for the level untill user choses a valid level
		system("CLS");
		do
		{
			//Level choice
			cout<<"Chose the difficulty Level: "<<endl;
			cout<<"N or n for Novice Level."<<endl;
			cout<<"F or f for Fresher Level."<<endl;
			cout<<"J or j for Junior Level."<<endl;
			cout<<"E or e for Expert Level."<<endl;
			cout<<"Enter the difficulty Level: ";
			cin>>level;
			switch (level)
			{
				case 'N':case 'n':
					tries=20;
					tot_hearts = 13;
					dificulty = "Novice";
					break;
				case 'F':case 'f':
					tries=16;
					tot_hearts = 10;
					dificulty = "Fresher";
					break;
				case 'J':case 'j':
					tries=12;
					tot_hearts = 7;
					dificulty = "Junior";
					break;
				case 'E':case 'e':
					tries=8;
					tot_hearts = 5;
					dificulty = "Expert";
					break;
				default:
					tries = 0;
					cout<<"Please chose from the following valid levels."<<endl;
			}
		}while(tries==0);
		//Storing the hearts in the card symbols array randomly
		srand(time(0));//Setting the seed to local time for random function
		for(int q=tot_hearts;q>0;q--)
		{
			int row=0;//For random row index
			int col=0;//for random coloumn index
			do
			{
				//random row index
				row = (rand()%4);
				//random Coloumn index
				col = (rand()%6);
				if(card_symbols[row][col]==heart_sym)
					continue;
				else
				{
					card_symbols[row][col]=heart_sym;
					break;
				}
			}while(card_symbols[row][col]==heart_sym);
		}
		//Storing spade in the remaining indices
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<6;j++)
			{
				if(card_symbols[i][j]!=heart_sym)
					card_symbols[i][j]=spad_sym;
			}
		}
		//printing card symbols array one time to verify
		/*for(int x=0;x<4;x++)
			{
				for(int y=0;y<6;y++)
				{
					if(y==0)
						{
							cout<<"|";
						}
					cout<<" "<<card_symbols[x][y]<<" |";
				}
				cout<<endl;
			
			}
		getch();*/
		//Creating a stats file for the game
		ofstream stats;
    	stats.open("Stats.txt",ios::ate);
		//Creating file and its basic structure
    	stats<<setw(15)<<left<<"Game No"<<setw(15)<<left<<"Score"<<setw(15)<<left<<"Difficulty"<<setw(15)<<left<<"Total Hearts"<<setw(15)<<left<<"Hearts Found"<<setw(15)<<left<<"Total Turns"<<endl;
		//Main Game Loop
		for(int z=1;(z<=tries)&&(found_hearts!=tot_hearts);z++)
		{
			system("CLS");
			//Displaying the game grid
			for(int x=0;x<4;x++)
			{
				for(int y=0;y<6;y++)
				{
					if(y==0)
						{
							cout<<"|";
						}
					cout<<" "<<game_grid[x][y]<<" |";
				}
				cout<<endl;
			}
			//Mining the grid and assigning scores
			char in_alpha;//Getting input of the user
			//TOTAL ALPHABET COUNTER
			int alp_count;
			cout<<"Enter an Alphabet from the board: ";
			cin>>in_alpha;
			alp_count++;
			//Searching for alphabet and assigning it's corresponding symbol
			for(int a=0;a<4;a++)
			{
				for(int b=0;b<6;b++)
				{
					if(game_grid[a][b]==in_alpha)
					{
						game_grid[a][b]=card_symbols[a][b];
						if(game_grid[a][b]==heart_sym)
						{
							++found_hearts;
						}
					}
				}
			}
			//calculating total score
			total_score = (found_hearts)*(100/z);
			if(z==tries)
			{
				system("CLS");
				cout<<"You have used all of your turns."<<endl;
				cout<<found_hearts<<" hearts found out of "<<tot_hearts<<endl;
				cout<<"Score: "<<total_score<<endl;
				cout<<"Press 'Y' or 'y' to play the game again.";
				cout<<"Press any other key to exit the game:";
				cin>>choice;
			}
			else if(found_hearts==tot_hearts)
			{
				system("CLS");
				cout<<found_hearts<<" hearts found out of "<<tot_hearts<<endl;
				cout<<"You have "<<tries-z<<" guesses remaining."<<endl;
				cout<<"Score: "<<total_score<<endl;
				cout<<"Congratulations! You have found all hearts.";
				cout<<"Press 'Y' or 'y' to play the game again."<<endl;
				cout<<"Press any other key to exit the game:";
				cin>>choice;
			}
			else
			{
				cout<<found_hearts<<" hearts found out of "<<tot_hearts<<endl;
				cout<<"You have "<<tries-z<<" guesses remaining."<<endl;
				cout<<"Score: "<<total_score;
				getch();
			}
		}	
	stats<<setw(15)<<left<<game_no<<setw(15)<<left<<total_score<<setw(15)<<left<<dificulty<<setw(15)<<left<<tot_hearts<<setw(15)<<left<<found_hearts<<setw(15)<<left<<tries<<endl;
	}while(choice=='y'||choice=='Y');
	return 0;
}