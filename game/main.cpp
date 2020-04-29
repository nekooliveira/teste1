#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string>
#include "mage.h"
#include "warrior.h"
using namespace std;

// produzido por Rogério Oliveira

bool ChoiceChar(){
	char choice;
	string name;

	
		while(choice!='1' && choice!='2'){
				
				cout << endl << "Lets you choice a class for this adventure!" << endl << "----- 1- to Warrior or 2 to Mage: ";
				cin >> choice;
				system("cls");
		
			if(choice!='1' && choice!='2'){
				printf("please chose a correct class!!\n");
										}
									}					
				 if(choice=='1'){
					return true;
								}
				
					else{
					return false;	
						}
					
					
					
		
		
}
int main(int argc, char *argv[]) {
bool a;	
int i;
string c[6],d[6];
string name1;

	cout << " Voicer: Hello foregner!"<< endl <<"         Welcome to the lost world!!";
	ChoiceChar();
	
			a=ChoiceChar();
			if(a==true){
		
				Warrior Wchoice;
				Warrior *ptrDados1 = &Wchoice;
				printf("Set a name Warrior:");
				cin >> name1;
				Wchoice.setName(name1);
		
			for(i=0;i<6;i++){
				c[i]= (*ptrDados1).status[i];
				d[i]= (*ptrDados1).statusName[i];
			cout << d[i] << c[i] << endl;
							}
				}
				else{
				Mage Mchoice;
				Mage *ptrDados1 = &Mchoice;
				printf("Set a name Mager:");
				cin >> name1;
		
				Mchoice.setName(name1);
		
			for(i=0;i<6;i++){
				c[i]= (*ptrDados1).status[i];
				d[i]= (*ptrDados1).statusName[i];
		
			cout << d[i] << c[i] << endl;
							}
				}	
	cout << endl<< "iniciando aventura" << endl;
system("pause");
/*
		if(classtype ==1){
				
					printf("\nOhhh! You select Warrior!!!\n");
					printf("\nNow its time to chose you first weapon!\n");
					
			while(weapontype !=1 && weapontype !=2){
							
					printf("\n1 to Two Handed Sword or 2 to Shield and one hand Sword\n");
						scanf("%i",&weapontype);
							
					if(weapontype !=1 && weapontype !=2){
							printf("please chose a correct Weapon!!\n");
						
				}		
			}
								if(weapontype ==1){
									mainatk=5+twosword;
									mainhp=50;
									mainmana=15;
									maindefense=4;
									magicatk=0;
									skill=8+twosword;
								}
								else{
									mainatk=5+onesword;
									mainhp=50;
									mainmana=15;
									maindefense=4+shield;
									magicatk=0;
									skill=8+onesword;
								}
		}
		
		else{
					printf("\nOhhh! You select Mage!!!\n");
					printf("\nNow its time to chose you first weapon!\n");
					
			while(weapontype !=1 && weapontype !=2){
							
					printf("\n1 to Magic Wand or 2 to Magic Sword\n");
						scanf("%i",&weapontype);
							
					if(weapontype !=1 && weapontype !=2){
							printf("please chose a correct Weapon!!\n");
				}
			}
			
								if(weapontype ==1){
									mainatk=2+wand;
									mainhp=35;
									magicatk=5+wand;
									mainmana=65;
									maindefense=2;
									skill=8+magicatk;
								}
								else{
									mainatk=2+magicsword;
									mainhp=35;
									magicatk=5+magicsword;
									mainmana=50;
									maindefense=2;
									skill=8+magicatk;
								}
		}
				system("cls");
	
		int hero[6]={mainhp,mainmana,maindefense,mainatk,magicatk,skill};
		
				printf("See you status:\n");
				printf("HP: %i\n",hero[0]);
				printf("MANA: %i\n",hero[1]);
				printf("Defense: %i\n",hero[2]);
				printf("Atk: %i\n",hero[3]);
				printf("Magic Atk: %i\n",hero[4]);
				printf("Skill Atk: %i\n",hero[5]);
				
				printf("\nAre you sure about this? 1 to YES or 2 for NO: \n");
				scanf("%i",&reset);
								
				}
				system("cls");
				
					if(reset==1){
						printf(" LET'S STAR YOUR ADVENTURE!!!\n\n");
					}
					
				printf("Then the adventurer left the city and headed towards the haunted maze..... \n");
				printf("-steps... steps... steps...\n");
				printf("-You: Oh, I finally got to the entrance Haunted Maze\n");
							
			int action=0;	
			while(action !=1){
				
				printf("\n\n-You: - What i do now??");
				printf("\n1 to Enter the Maze or 2 to Look Arround:");
				scanf("%i",&action);
				
				if(action ==2){
					printf("\nThere's nothing interisting arround");
				}
				else {
					system("cls");
					printf("-You: Let's Rock!");
			}
					
		}
	
    time_t t;
    srand((unsigned) time(&t));
	
	int enemy = rand() % 2;	
		
	
	
		if(enemy==0){
			printf("\n\n\nAt first steps inside the Maze you got atacked by a rat!....");
			
		}
		else if (enemy==1){
			printf("\n\n\nAt first steps inside the Maze you got atacked by a bat!....");
		
		}
	int rat[3]={10,9,1};		
    int bat[3]={11,9,1};	
	int hero[6]={mainhp,mainmana,maindefense,mainatk,magicatk,skill};	
			printf("\n\n ----THE BATTLE BEGINS!!----");
			
		while(hero[0]>0 && rat[0]>0 && bat[0]>0){
	action=0;
	
		int action;
			printf("\nYou Status:\n");
			printf("HP: %i\n",hero[0]);
			printf("MANA: %i\n",hero[1]);
			printf("Defense: %i\n",hero[2]);
			printf("Atk: %i\n",hero[3]);
			printf("Magic Atk: %i\n",hero[4]);
			printf("Skill Atk: %i\n",hero[5]);
		
			if(enemy==0){
			
				printf("\nEnemy Status:\n");
				printf("HP: %i\n",rat[0]);
				printf("ATK: %i\n",rat[1]);
				printf("DEF: %i\n",rat[2]);
			}
			else{
				printf("\nEnemy Status:\n");
				printf("HP: %i\n",bat[0]);
				printf("ATK: %i\n",bat[1]);
				printf("DEF: %i\n",bat[2]);
				
			}
		
			
			printf("\nActions: 1 to ATACK or 2 to  use a SKILL: ");
			scanf("%i",&action);
						
				if(enemy==0 && action==1){
					printf("\nYOU HAVE ATACKED THE ENEMY!!!");
					printf("\nYOU HIT %i DAMAGE ON ENEMY",hero[3]-rat[2]);
					rat[0]-=hero[3]-rat[2];
								
					if(rat[0]>0){
						printf("\nRAT ATACKED YOU!!!");
						printf("YOU LOSE %i HP",rat[1]-hero[2]);
						hero[0]-=rat[1]-hero[2];
					}
					}
				
				else if (enemy==1 && action==1){
					printf("\nYOU HAVE ATACKED THE ENEMY!!!");
					printf("\nYOU HIT %i DAMAGE ON ENEMY",hero[3]-bat[2]);
					bat[0]-=hero[3]-bat[2];
				
					if(bat[0]>0){
						printf("\nRAT ATACKED YOU!!!");
						printf("YOU LOSE %i HP",bat[1]-hero[2]);
						hero[0]-=bat[1]-hero[2];
					}
				}
				else if (enemy==0 && action==2){
					printf("\nYOU HAVE ATACKED THE ENEMY WITH A SKILL!!!");
					printf("\nYOU HIT %i DAMAGE ON ENEMY",hero[5]-rat[2]);
					rat[0]-=hero[5]-rat[2];
					hero[1]-=7;
										
					if(rat[0]>0){
						printf("\nRAT ATACKED YOU!!!");
						printf("YOU LOSE %i HP",rat[1]-hero[2]);
						hero[0]-=rat[1]-hero[2];
					}
				}
				else if (enemy==1 && action==2){
					printf("\nYOU HAVE ATACKED THE ENEMY WITH A SKILL!!!");
					printf("\nYOU HIT %i DAMAGE ON ENEMY",hero[5]-bat[2]);
					bat[0]-=hero[5]-bat[2];
					hero[1]-=7;
									
						if(bat[0]>0){
						printf("\nRAT ATACKED YOU!!!");
						printf("YOU LOSE %i HP",bat[1]-hero[2]);
						hero[0]-=bat[1]-hero[2];
			
			}
		}
	}
			printf("\nYOU HAVE KILLED THE ENEMY!!!");
			
			printf("\n\nYou Status after battle:\n");
			printf("HP: %i\n",hero[0]);
			printf("MANA: %i\n",hero[1]);
			printf("Defense: %i\n",hero[2]);
			printf("Atk: %i\n",hero[3]);
			printf("Magic Atk: %i\n",hero[4]);
			printf("Skill Atk: %i\n",hero[5]);
			*/
	return 0;
}

