#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

class Warrior{
	
			public:
					
					Warrior();
					void setName(string dado);
					
					string getNome();
					int getAtack();
					int getDefense();
					int HPpoints();
					int ManaPoints();
					
					string Name;
					int Atack = 10;
					int Defense= 5;
					int HPpoints= 30;
					int ManaPoints= 10;
};
