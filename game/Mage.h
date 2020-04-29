
#include <iostream>
#include <string>
using namespace std;


class Mage{
	
			public:
					
					Mage();
					void setName(string dado);
					string getName();
				/*	int getAtack();
					int getDefense();
					int getHPpoints();
					int getManaPoints();
					int getMagic();
					*/
					
					
				
					string Name;
				
					string status[6]={Name,"2","1","18","50","10"};
					string statusName[6]={"Name: ", "Atack: ","Defesa: ","Hp: ","Mana: ","MagicAtack: "};
				/*	string status[6]={[0]=Name,[1]="10",[2]="5",[3]="30",[4]="10",[5]="0"};
					int AtackW = 10;
					int Defense= 5;
					int HPpoints= 30;
					int ManaPoints= 10;
					int MagicAtack= 0;
					
					*/

};
