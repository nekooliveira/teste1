#include  "Warrior.h"
Warrior::Warrior()
{
	
}
void Warrior::setName(string dado)
{
	Name = dado;
	status[0] = Name;
}
string Warrior::getName()
{
	return Name;
}
/*
int Warrior::getAtack()
{
	return AtackW;
}

int Warrior::getDefense()
{
	return Defense;
}

int Warrior::getHPpoints()
{
	return HPpoints;
}

*/


